/*
 * XREFs of MiAttemptPageFileExtension @ 0x1406B77B4
 * Callers:
 *     MiExtendPagingFiles @ 0x1406B7A90 (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x140219F78 (MiFinishPageFileExtension.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, unsigned __int64 a2)
{
  struct _KEVENT *v4; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  struct _FILE_OBJECT *v10; // rcx
  int v12; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 FileInformation; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+60h] [rbp-38h]
  int v16; // [rsp+64h] [rbp-34h]

  v4 = *(struct _KEVENT **)(a1 + 256);
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8)
    && (int)IopQueryXxxInformation(*(struct _FILE_OBJECT **)(a1 + 56), 3, 24, 0, (__int64)v14, &v12, 0) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      if ( a2 >= i )
      {
        v6 = a2;
        i = 4096LL;
      }
      else
      {
        v6 = i;
      }
      v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      if ( v6 <= v7 )
        v7 = v6;
      v8 = v14[1] * (unsigned int)(v15 * v16);
      if ( v8 <= 0x10000000 )
        break;
      v9 = (v8 - 0x10000000) >> 12;
      if ( v9 <= v7 )
        v7 = v9;
      if ( (*(_BYTE *)(a1 + 204) & 0x10) != 0 && v7 < a2 )
        break;
      v10 = *(struct _FILE_OBJECT **)(a1 + 56);
      FileInformation = (v7 + *(_QWORD *)a1) << 12;
      if ( !IoSetInformation(v10, FileEndOfFileInformation, 8u, &FileInformation) )
      {
        MiFinishPageFileExtension(v4, a1, v7);
        return v7;
      }
      if ( i == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
