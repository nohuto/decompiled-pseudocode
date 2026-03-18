/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C0205D10
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0214184 (xxxMNDragOver.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C02058B0 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v24[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v24, 0, sizeof(v24));
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1, v9, v10, v11);
  if ( a2 )
    v24[0] = *(_QWORD *)a2;
  else
    v24[0] = 0LL;
  LODWORD(v24[1]) = a3;
  v24[2] = a4;
  v12 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v12 = ((unsigned __int16)(*(_WORD *)(a2 + 148) + WORD1(a5)) << 16) | (unsigned __int16)(a5 + *(_WORD *)(a2 + 144));
  v13 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v24[3] = v12;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, v13, v10, v11);
  v14 = xxxHandleMenuMessages((__int64)v24, a1, v23);
  *(_DWORD *)(a1 + 8) &= ~0x200u;
  v17 = v14;
  v18 = *(_DWORD *)(a1 + 8);
  if ( v14 && (v18 & 0x100) != 0 && ((v18 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1, v15, v16);
    xxxMNEndMenuState(a1, v19, v20, v21);
  }
  return v17;
}
