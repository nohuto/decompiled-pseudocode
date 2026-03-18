/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01172CC
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z @ 0x1C011E310 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KIKHHVCInputDest@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ValidateHbwnd @ 0x1C00DBA10 (ValidateHbwnd.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(__int64 *a1, _OWORD *a2, void *a3, __int64 a4)
{
  __int128 v5; // xmm0
  _OWORD *v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 *v11[3]; // [rsp+20h] [rbp-18h] BYREF

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
      v9 = (__int64 *)ValidateHwndEx(a3, 1LL, 0LL, a4);
      goto LABEL_10;
    }
    LOBYTE(v6) = 1;
  }
  else
  {
    if ( v7 != 1 )
    {
LABEL_12:
      memset(a1, 0, 0xC8uLL);
      return a1[10] != 0;
    }
    v8 = (unsigned __int64)a3;
    if ( (_DWORD)a4 == 2 )
    {
      v9 = (__int64 *)ValidateHbwnd((unsigned __int64)a3);
      goto LABEL_10;
    }
    LOBYTE(v6) = 23;
  }
  v9 = (__int64 *)HMValidateHandleNoSecure(v8, (__int64)v6, (__int64)a3, a4);
LABEL_10:
  if ( !v9 )
    goto LABEL_12;
  v11[1] = v9;
  v11[0] = a1 + 10;
  HMAssignmentLock(v11);
  return a1[10] != 0;
}
