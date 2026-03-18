/*
 * XREFs of GreSaveDC @ 0x1C0080270
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C0080250 (NtGdiSaveDC.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0080624 (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0080648 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C02663D8 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDC(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  DC *v3; // rcx
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // r12
  int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  int v12; // eax
  DC *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  DC *v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-28h]
  int v21; // [rsp+98h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+38h] BYREF

  LOBYTE(a2) = 1;
  v18 = 0LL;
  v17 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v17 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_9;
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v17) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v17 + 3);
    v17 = 0LL;
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_44;
  }
  v3 = v17;
  if ( (*((_DWORD *)v17 + 134) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v17);
LABEL_9:
    v3 = v17;
  }
  v2 = 0;
  if ( !v3 )
  {
    EngSetLastError(6u);
    goto LABEL_44;
  }
  v4 = *((_QWORD *)v3 + 10);
  v5 = *(_DWORD *)(v4 + 8);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 16));
    v3 = v17;
  }
  if ( (v5 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 10) + 24LL));
    v3 = v17;
  }
  v6 = *((_QWORD *)v3 + 6);
  v22 = v6;
  if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
    GreLockVisRgn(v6);
  GreAcquireSemaphore(ghsemPalette);
  v7 = *((_DWORD *)v17 + 9) & 0x800;
  if ( v7 )
    DC::bMakeInfoDC(v17, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v19, (struct DCOBJ *)&v17);
  if ( v19[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v22);
    v8 = *((_QWORD *)v17 + 16);
    *((_QWORD *)v17 + 16) = *(_QWORD *)v19[0];
    v9 = *(_DWORD *)(v19[0] + 116LL);
    if ( (unsigned int)bSavePath((struct XDCOBJ *)&v17, v9 + 1) )
    {
      v10 = *(_DWORD *)(v19[0] + 116LL);
      if ( (unsigned int)bSaveRegion((struct DCOBJ *)&v17, v10 + 1) )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v19[0], 2147483666LL, 0LL, 1LL) )
        {
          v20 = 1;
          PDEVOBJ::vUnreferencePdev(&v22, 0LL);
          if ( (*((_DWORD *)v17 + 9) & 0x4000) != 0 )
            *(_DWORD *)(v19[0] + 36LL) |= 0x4000u;
          v11 = *(_QWORD *)(v19[0] + 512LL);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 112);
            if ( (v12 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v19[0] + 512LL));
            }
            else if ( v12 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v19[0] + 512LL));
              ++*(_DWORD *)(v11 + 168);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v17 + 18));
          INC_SHARE_REF_CNT(*((_QWORD *)v17 + 19));
          INC_SHARE_REF_CNT(*((_QWORD *)v17 + 20));
          INC_SHARE_REF_CNT(*((_QWORD *)v17 + 13));
          v13 = v17;
          v14 = *((_QWORD *)v17 + 12);
          if ( (struct PALETTE *)v14 != ppalDefault )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 56));
            v13 = v17;
          }
          v2 = *((_DWORD *)v13 + 29);
          *((_DWORD *)v13 + 29) = v2 + 1;
          goto LABEL_38;
        }
        vRestoreRegion(&v17, v10);
      }
      vRestorePath((struct XDCOBJ *)&v17, v9);
    }
    *((_QWORD *)v17 + 16) = v8;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_38:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v19);
  if ( v7 )
    DC::bMakeInfoDC(v17, 1);
  if ( (*(_DWORD *)(v22 + 32) & 1) != 0 )
    GreUnlockVisRgn(v22);
  if ( ghsemPalette )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
  }
LABEL_44:
  if ( v17 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
    v21 = 0;
    v15 = *(_QWORD *)v17;
    HmgDecrementExclusiveReferenceCountEx(v17, HIDWORD(v18), &v21);
    if ( v21 )
      bDeleteDCInternalEx(v15, 0LL);
  }
  return v2;
}
