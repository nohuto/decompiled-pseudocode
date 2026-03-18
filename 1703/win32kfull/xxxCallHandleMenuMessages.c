/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C02042C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0212C20 (xxxMNDragOver.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     MNCheckButtonDownState @ 0x1C0203DFC (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // ecx
  __int64 v15[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[6]; // [rsp+40h] [rbp-38h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1);
  if ( a2 )
    v16[0] = *(_QWORD *)a2;
  else
    v16[0] = 0LL;
  LODWORD(v16[1]) = a3;
  v16[2] = a4;
  v9 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v9 = ((unsigned __int16)(*(_WORD *)(a2 + 148) + WORD1(a5)) << 16) | (unsigned __int16)(a5 + *(_WORD *)(a2 + 144));
  v10 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v16[3] = v9;
  SmartObjStackRef<tagPOPUPMENU>::Init(v15, v10);
  v11 = xxxHandleMenuMessages((__int64)v16, a1, v15);
  *(_DWORD *)(a1 + 8) &= ~0x200u;
  v12 = v11;
  v13 = *(_DWORD *)(a1 + 8);
  if ( v11 && (v13 & 0x100) != 0 && ((v13 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(_QWORD *)a1);
    xxxMNEndMenuState(a1);
  }
  return v12;
}
