/*
 * XREFs of ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01171A4
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     ValidateHbwnd @ 0x1C00DBA10 (ValidateHbwnd.c)
 */

char __fastcall CInputDest::IsEqualByWindowHandle(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  void *v4; // rbx
  unsigned __int64 v5; // r9
  void **v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char v10; // di
  __int64 v11; // r8
  __int64 v12; // rax

  v3 = *(_DWORD *)(a1 + 92);
  v4 = 0LL;
  v5 = (unsigned __int64)a2;
  if ( v3 == 2 )
  {
    v6 = *(void ***)(a1 + 80);
    if ( a3 )
    {
      v7 = (unsigned int)(a3 - 1);
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          v8 = ValidateHwndEx(a2, 1LL, 0LL, (__int64)a2);
          goto LABEL_6;
        }
        return (char)v4;
      }
      v9 = (unsigned __int64)a2;
      LOBYTE(a2) = 1;
      v8 = HMValidateHandleNoSecure(v9, (__int64)a2, v7, v5);
LABEL_6:
      if ( v8 )
      {
        if ( (void **)v8 == v6 )
          LOBYTE(v4) = 1;
      }
      return (char)v4;
    }
LABEL_19:
    if ( v6 )
      v4 = *v6;
    LOBYTE(v4) = v4 == a2;
    return (char)v4;
  }
  v10 = 1;
  if ( v3 != 1 )
    return (char)v4;
  v6 = *(void ***)(a1 + 80);
  if ( !a3 )
    goto LABEL_19;
  v11 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v11 )
  {
    if ( (_DWORD)v11 != 1 )
      return (char)v4;
    v8 = ValidateHbwnd((unsigned __int64)a2);
    goto LABEL_6;
  }
  LOBYTE(a2) = 23;
  v12 = HMValidateHandleNoSecure(v5, (__int64)a2, v11, v5);
  if ( !v12 || (void **)v12 != v6 )
    return 0;
  return v10;
}
