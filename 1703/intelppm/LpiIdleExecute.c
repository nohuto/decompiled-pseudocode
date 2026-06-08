/*
 * XREFs of LpiIdleExecute @ 0x1C000E5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LpiIdleExecute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r8
  _BYTE *v8; // r10
  void (__fastcall *v9)(_BYTE *, __int64, _BYTE *); // r11
  void (__fastcall *v10)(_BYTE *, _QWORD); // rbx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = 88LL * a3;
  v8 = (_BYTE *)(v7 + a1 + 96);
  v9 = *(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(v7 + a1 + 128);
  v10 = *(void (__fastcall **)(_BYTE *, _QWORD))(v7 + a1 + 88);
  if ( v9 )
  {
    LODWORD(v11) = a6;
    v12 = *(_QWORD *)(v7 + a1 + 120);
    if ( a6 )
    {
      do
      {
        v11 = (unsigned int)(v11 - 1);
        v13 = qword_1C00162F0 + 48LL * *(unsigned int *)(a7 + 4 * v11);
        if ( *(_QWORD *)v13 )
        {
          v9 = *(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(v13 + 40);
          v8 = (_BYTE *)(v13 + 8);
          v10 = *(void (__fastcall **)(_BYTE *, _QWORD))v13;
          if ( !v9 )
            goto LABEL_9;
          v12 = *(_QWORD *)(v13 + 32);
        }
        else
        {
          v12 += *(_QWORD *)(v13 + 32);
        }
      }
      while ( (_DWORD)v11 );
    }
    v9(v8, v12 + a2, v15);
    v8 = v15;
  }
LABEL_9:
  v10(v8, a5);
  return 0LL;
}
