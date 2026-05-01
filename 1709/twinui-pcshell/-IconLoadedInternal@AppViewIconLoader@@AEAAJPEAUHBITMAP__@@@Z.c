/*
 * XREFs of ?IconLoadedInternal@AppViewIconLoader@@AEAAJPEAUHBITMAP__@@@Z @ 0x180197CB4
 * Callers:
 *     ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x180197C40 (-IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewIconLoader::IconLoadedInternal(AppViewIconLoader *this, HBITMAP a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  int v12; // r8d
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE pv[8]; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+38h] [rbp-18h]
  int v21; // [rsp+3Ch] [rbp-14h]
  __int16 v22; // [rsp+42h] [rbp-Eh]
  __int64 v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v25; // [rsp+70h] [rbp+20h] BYREF
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v18[1] = -2LL;
  v26 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v26);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_26;
  }
  v27 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v26)(
         v26,
         &GUID_905a0fef_bc53_11df_8c49_001e4fc686da,
         &v27);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 54LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_24;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 56LL))(v26, &v25);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 57LL;
    goto LABEL_9;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v27 + 24LL))(v27, v18);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = 60LL;
    goto LABEL_9;
  }
  if ( GetObjectW(a2, 32, pv) )
  {
    v10 = v23;
    if ( v23 )
    {
      if ( v22 == 32 )
      {
        v11 = v20;
        v12 = v21;
        if ( v21 * v20 <= v25 )
        {
          v13 = 0;
          if ( v20 > 0 )
          {
            while ( 1 )
            {
              memcpy_0((void *)(v18[0] + v12 * (v11 - v13 - 1)), (const void *)(v10 + v12 * v13), v12);
              ++v13;
              v11 = v20;
              if ( v13 >= v20 )
                break;
              v10 = v23;
              v12 = v21;
            }
          }
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
          v5 = v14;
          if ( v14 >= 0 )
            goto LABEL_24;
          v8 = (unsigned int)v14;
          v9 = 76LL;
        }
        else
        {
          v5 = -2147024662;
          v8 = 2147942634LL;
          v9 = 66LL;
        }
      }
      else
      {
        v5 = -2147022896;
        v8 = 2147944400LL;
        v9 = 65LL;
      }
    }
    else
    {
      v5 = -2147467261;
      v8 = 2147500035LL;
      v9 = 64LL;
    }
  }
  else
  {
    v5 = -2147467259;
    v8 = 2147500037LL;
    v9 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
    (const char *)v8);
LABEL_24:
  v15 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_26:
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v5;
}
