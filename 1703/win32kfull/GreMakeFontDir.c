/*
 * XREFs of GreMakeFontDir @ 0x1C0297420
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C028E290 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0021448 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00272DC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C002741C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00321C4 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C0032264 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00322E4 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00326F4 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreFillFontDir @ 0x1C0297010 (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  struct PDEV *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  struct _IFIMETRICS *v11; // rax
  struct _IFIMETRICS *v12; // r14
  __int64 v13; // rcx
  struct PDEV *v15; // [rsp+48h] [rbp-79h] BYREF
  int v16; // [rsp+50h] [rbp-71h] BYREF
  struct _FONTFILEVIEW *v17; // [rsp+58h] [rbp-69h] BYREF
  void *v18; // [rsp+60h] [rbp-61h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-51h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C0338A40;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C0338A40 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v15 = v3;
  memset(iFile, 0, 0x78uLL);
  LODWORD(iFile[5]) |= 0x20u;
  v17 = (struct _FONTFILEVIEW *)iFile;
  iFile[10] = a3;
  if ( (unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, &v18, &v22, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v17, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v15, 1u, (unsigned __int64 *)&v17, &v18, &v22, 0LL, gusLanguageID, 0);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v11 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, 0LL, v9, 1u, &v19);
          v12 = v11;
          if ( v11 )
          {
            v8 = GreFillFontDir((__int64)v11, a1, a2);
            if ( *((_QWORD *)v15 + 380) )
              PDEVOBJ::Free((PDEVOBJ *)&v15, v12, v19);
          }
          if ( v10 != 0xFFFFFFFFLL )
            v8 &= -((unsigned int)PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v15, v10) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
      if ( UmfdFileviewLookup )
      {
        v16 = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v13, &v16);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}
