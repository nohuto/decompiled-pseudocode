/*
 * XREFs of ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003A904
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180069B30 (-Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?SetValueForKey@?$FixedSizeMap@KK$07@@QEAAJAEBK0@Z @ 0x18003ABE4 (-SetValueForKey@-$FixedSizeMap@KK$07@@QEAAJAEBK0@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardModifierState::Create(struct KeyboardModifierState **a1)
{
  int v2; // ebx
  struct KeyboardModifierState *v3; // rdi
  struct KeyboardModifierState *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+24h] [rbp-3Ch] BYREF
  int v10; // [rsp+28h] [rbp-38h] BYREF
  int v11; // [rsp+2Ch] [rbp-34h] BYREF
  int v12; // [rsp+30h] [rbp-30h] BYREF
  int v13; // [rsp+34h] [rbp-2Ch] BYREF
  int v14; // [rsp+38h] [rbp-28h] BYREF
  int v15; // [rsp+3Ch] [rbp-24h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+44h] [rbp-1Ch] BYREF
  int v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+4Ch] [rbp-14h] BYREF
  int v20[4]; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF
  int v22; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  if ( KeyboardModifierState::s_pKeyboardModifierState )
  {
    (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)KeyboardModifierState::s_pKeyboardModifierState
                                                           + 8LL))(KeyboardModifierState::s_pKeyboardModifierState);
    v3 = KeyboardModifierState::s_pKeyboardModifierState;
LABEL_21:
    *a1 = v3;
    return (unsigned int)v2;
  }
  v4 = (struct KeyboardModifierState *)malloc(0x58uLL);
  v3 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x58uLL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &RefCountedObject::`vftable';
    v5 = (_DWORD *)((char *)v3 + 16);
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &KeyboardModifierState::`vftable';
    *((_DWORD *)v3 + 20) = -1;
    memset_0((char *)v3 + 16, 0, 0x40uLL);
    v6 = 8LL;
    do
    {
      *v5 = *((_DWORD *)v3 + 20);
      v5 += 2;
      --v6;
    }
    while ( v6 );
    KeyboardModifierState::s_pKeyboardModifierState = 0LL;
    *((_DWORD *)v3 + 21) = 0;
  }
  if ( v3 )
  {
    v21 = 0;
    v22 = 1;
    v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v22, &v21);
    if ( v2 >= 0 )
    {
      v23 = 0;
      v8 = 2;
      v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v8, &v23);
      if ( v2 >= 0 )
      {
        v9 = 0;
        v10 = 4;
        v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v10, &v9);
        if ( v2 >= 0 )
        {
          v11 = 0;
          v12 = 8;
          v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v12, &v11);
          if ( v2 >= 0 )
          {
            v13 = 0;
            v14 = 16;
            v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v14, &v13);
            if ( v2 >= 0 )
            {
              v15 = 0;
              v16 = 32;
              v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v16, &v15);
              if ( v2 >= 0 )
              {
                v17 = 0;
                v18 = 64;
                v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, &v18, &v17);
                if ( v2 >= 0 )
                {
                  v19 = 0;
                  v20[0] = 128;
                  v2 = FixedSizeMap<unsigned long,unsigned long,8>::SetValueForKey((char *)v3 + 16, v20, &v19);
                }
              }
            }
          }
        }
      }
    }
    if ( v2 >= 0 )
    {
      KeyboardModifierState::s_pKeyboardModifierState = v3;
      goto LABEL_21;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
