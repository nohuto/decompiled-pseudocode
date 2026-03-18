/*
 * XREFs of ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01182FC
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0122124 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 *     ValidateHbwnd @ 0x1C00D5660 (ValidateHbwnd.c)
 */

char __fastcall CInputDest::IsEqualByWindowHandle(__int64 a1, void *a2, int a3)
{
  int v3; // eax
  void *v4; // rbx
  void **v5; // rsi
  int v6; // r8d
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // r8
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 92);
  v4 = 0LL;
  if ( v3 == 2 )
  {
    v5 = *(void ***)(a1 + 80);
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v7 = ValidateHwndEx(a2, 1, 0);
          goto LABEL_6;
        }
        return (char)v4;
      }
      v7 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
LABEL_6:
      if ( v7 )
      {
        if ( (void **)v7 == v5 )
          LOBYTE(v4) = 1;
      }
      return (char)v4;
    }
LABEL_19:
    if ( v5 )
      v4 = *v5;
    LOBYTE(v4) = v4 == a2;
    return (char)v4;
  }
  v8 = 1;
  if ( v3 != 1 )
    return (char)v4;
  v5 = *(void ***)(a1 + 80);
  if ( !a3 )
    goto LABEL_19;
  v9 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 != 1 )
      return (char)v4;
    v7 = ValidateHbwnd((unsigned __int64)a2, (__int64)a2, v9, (__int64)a2);
    goto LABEL_6;
  }
  v10 = HMValidateHandleNoSecure((unsigned __int64)a2, 23);
  if ( !v10 || (void **)v10 != v5 )
    return 0;
  return v8;
}
