/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C011842C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011F470 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ValidateHbwnd @ 0x1C00D5660 (ValidateHbwnd.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(_QWORD *a1, _OWORD *a2, void *a3, __int64 a4)
{
  __int128 v5; // xmm0
  _OWORD *v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // dl
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a1 = *a2;
  *((_OWORD *)a1 + 1) = a2[1];
  *((_OWORD *)a1 + 2) = a2[2];
  *((_OWORD *)a1 + 3) = a2[3];
  *((_OWORD *)a1 + 4) = a2[4];
  *((_OWORD *)a1 + 5) = a2[5];
  *((_OWORD *)a1 + 6) = a2[6];
  v5 = a2[7];
  v6 = a2 + 8;
  *((_OWORD *)a1 + 7) = v5;
  *((_OWORD *)a1 + 8) = *v6;
  *((_OWORD *)a1 + 9) = v6[1];
  *((_OWORD *)a1 + 10) = v6[2];
  *((_OWORD *)a1 + 11) = v6[3];
  v7 = *((_DWORD *)a1 + 23);
  if ( v7 == 2 )
  {
    v8 = (unsigned __int64)a3;
    if ( (_DWORD)a4 == 2 )
    {
      v9 = ValidateHwndEx(a3, 1, 0);
      goto LABEL_10;
    }
    v10 = 1;
  }
  else
  {
    if ( v7 != 1 )
    {
LABEL_12:
      memset(a1, 0, 0xC8uLL);
      return a1[10] != 0LL;
    }
    v8 = (unsigned __int64)a3;
    if ( (_DWORD)a4 == 2 )
    {
      v9 = ValidateHbwnd((unsigned __int64)a3, (__int64)v6, (__int64)a3, a4);
      goto LABEL_10;
    }
    v10 = 23;
  }
  v9 = HMValidateHandleNoSecure(v8, v10);
LABEL_10:
  if ( !v9 )
    goto LABEL_12;
  v12[1] = v9;
  v12[0] = a1 + 10;
  HMAssignmentLock((__int64)v12);
  return a1[10] != 0LL;
}
