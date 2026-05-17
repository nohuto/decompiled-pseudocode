/*
 * XREFs of sub_180076270 @ 0x180076270
 * Callers:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800D0368 @ 0x1800D0368 (sub_1800D0368.c)
 *     LdrOpenImageFileOptionsKey @ 0x1800DBE60 (LdrOpenImageFileOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800DBF00 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800DC7A0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_1800763CC @ 0x1800763CC (sub_1800763CC.c)
 *     sub_180076424 @ 0x180076424 (sub_180076424.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     sub_1800DD5D8 @ 0x1800DD5D8 (sub_1800DD5D8.c)
 */

__int64 __fastcall sub_180076270(unsigned __int16 *a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v5; // r15d
  __int64 v6; // r11
  char v8; // r12
  _WORD *v9; // r8
  int v10; // r10d
  int v11; // r11d
  char v12; // si
  __int64 result; // rax
  __int64 v14; // rdi
  int v15; // eax
  int inited; // ebx
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  _QWORD v20[2]; // [rsp+40h] [rbp-29h] BYREF
  __int16 v21; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v22; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  __int16 *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  __int128 v27; // [rsp+80h] [rbp+17h]
  __int64 v28; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v30; // [rsp+E8h] [rbp+7Fh]

  v30 = a4;
  *a4 = 0LL;
  v5 = a2;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  v20[0] = 0LL;
  v28 = 0LL;
  v10 = v6;
  if ( a3 && (v6 + 2 > (unsigned __int64)a1[1] || *v9) )
    return 3221225485LL;
  if ( (_DWORD)v6 )
  {
    while ( *(v9 - 1) != 92 )
    {
      --v9;
      v10 -= 2;
      if ( !v10 )
        goto LABEL_7;
    }
    v8 = 1;
  }
LABEL_7:
  v11 = v6 - v10;
  v22 = v9;
  v21 = v11;
  if ( (unsigned __int16)v11 != v11 )
    return 3221225507LL;
  if ( a3 )
  {
    LOBYTE(v9) = a3;
    v12 = 1;
    result = sub_180076424(v20, a2, v9);
  }
  else
  {
    v12 = 0;
    result = sub_1800763CC(v20);
  }
  if ( (int)result >= 0 )
  {
    v14 = v20[0];
    v25 = &v21;
    v23 = 48;
    v24 = v20[0];
    v26 = 576;
    v27 = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&v28, v5, &v23, 0LL, 0LL, 0, 0LL);
    else
      v15 = ZwOpenKey(&v28, v5, &v23);
    inited = v15;
    if ( v12 )
      ZwClose(v14);
    if ( inited >= 0 )
    {
      v20[0] = v28;
      v17 = sub_180076488(v20, v5, a1);
      v18 = v20[0];
      inited = v17;
      if ( v17 < 0 )
        goto LABEL_36;
      if ( v20[0] == v28 && v8 && a3 )
      {
        v20[0] = 0LL;
        v19 = sub_1800DD5D8(v20, v28, v5);
        v18 = v20[0];
        inited = v19;
        if ( v19 >= 0 )
        {
          inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"FilterFullPath");
          if ( inited >= 0 )
          {
            inited = ZwSetValueKey(v18, v20, 0LL, 1LL, *((_QWORD *)a1 + 1), a1[1]);
            if ( inited >= 0 )
            {
              v29 = 1;
              inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"UseFilter");
              if ( inited >= 0 )
                inited = ZwSetValueKey(v28, v20, 0LL, 4LL, &v29, 4);
            }
          }
        }
        ZwClose(v28);
      }
      if ( inited < 0 )
      {
LABEL_36:
        if ( v18 )
          ZwClose(v18);
      }
      else
      {
        *v30 = v18;
      }
    }
    return (unsigned int)inited;
  }
  return result;
}
