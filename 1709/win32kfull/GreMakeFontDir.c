/*
 * XREFs of GreMakeFontDir @ 0x1C0293AF0
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C028AE10 (NtGdiMakeFontDir.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C003D818 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C003DEC0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C003DF5C (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C003DFF0 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00B4A60 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00B4B9C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GreFillFontDir @ 0x1C02936D0 (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  struct PDEV *v3; // r15
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rdi
  struct _IFIMETRICS *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _IFIMETRICS *v13; // r14
  __int64 v14; // rcx
  struct PDEV *v16; // [rsp+48h] [rbp-79h] BYREF
  struct _FONTFILEVIEW *v17; // [rsp+50h] [rbp-71h] BYREF
  void *v18; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C0334158;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C0334158 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v16 = v3;
  memset(iFile, 0, 0x78uLL);
  LODWORD(iFile[5]) |= 0x20u;
  v17 = (struct _FONTFILEVIEW *)iFile;
  iFile[10] = a3;
  if ( (unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, &v18, &v22, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v17, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile(&v16, 1u, (unsigned __int64 *)&v17, &v18, &v22, 0LL, gusLanguageID, 0);
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v10 = PDEVOBJ::QueryFont(&v16, 0LL, v9, 1LL, &v19);
          v13 = v10;
          if ( v10 )
          {
            v8 = GreFillFontDir((__int64)v10, a1, a2);
            if ( *((_QWORD *)v3 + 380) )
              PDEVOBJ::Free(&v16, v13, v19, v12);
          }
          v8 &= -((unsigned int)PDEVOBJ::UnloadFontFile(&v16, v9, v11, v12) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)&UmfdFileViewPushLock);
      if ( UmfdFileviewLookup )
      {
        LODWORD(v16) = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v14, &v16);
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
