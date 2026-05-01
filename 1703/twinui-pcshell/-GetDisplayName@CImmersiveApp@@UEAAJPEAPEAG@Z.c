/*
 * XREFs of ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800515E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?GetLocalizedDisplayNameFromAppId@@YAJPEBGAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180050214 (-GetLocalizedDisplayNameFromAppId@@YAJPEBGAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windo.c)
 */

__int64 __fastcall CImmersiveApp::GetDisplayName(CImmersiveApp *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v3; // rcx
  unsigned __int16 *v4; // rbx
  int v6; // edi
  _QWORD *v7; // rsi
  _WORD *v8; // rax
  int v9; // eax
  int LocalizedDisplayNameFromAppId; // eax
  int v11; // eax
  unsigned __int16 *v12; // rax
  const unsigned __int16 *v14[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  v4 = 0LL;
  v14[0] = 0LL;
  *a2 = 0LL;
  v6 = 0;
  v14[1] = 0LL;
  v14[2] = 0LL;
  AcquireSRWLockShared(v3);
  v7 = (_QWORD *)((char *)this + 448);
  v8 = (_WORD *)*((_QWORD *)this + 56);
  if ( v8 && *v8 )
  {
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)v14,
           *((const unsigned __int16 **)this + 56),
           0xFFFFFFFFFFFFFFFFuLL);
    v4 = (unsigned __int16 *)v14[0];
    v6 = v9;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
  {
    if ( v4 && *v4 )
    {
LABEL_15:
      v12 = v4;
      v4 = 0LL;
      *a2 = v12;
      goto LABEL_17;
    }
    LocalizedDisplayNameFromAppId = GetLocalizedDisplayNameFromAppId(*((_QWORD *)this + 54), (__int64)v14);
    if ( LocalizedDisplayNameFromAppId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5D7,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)LocalizedDisplayNameFromAppId);
      v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)v14,
             *((const unsigned __int16 **)this + 54),
             0xFFFFFFFFFFFFFFFFuLL);
    }
    if ( v6 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v4 = (unsigned __int16 *)v14[0];
      if ( !*v7 || !*(_WORD *)*v7 )
      {
        v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)this + 448,
                v14[0],
                0xFFFFFFFFFFFFFFFFuLL);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5E3,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)(unsigned int)v11);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_15;
    }
    v4 = (unsigned __int16 *)v14[0];
  }
LABEL_17:
  if ( v4 )
    CoTaskMemFree(v4);
  return (unsigned int)v6;
}
