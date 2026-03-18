/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C0094D14
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3, int a4)
{
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int16 v10; // r15
  unsigned int v11; // edi
  _WORD *v12; // rax
  _WORD *v13; // r8
  unsigned __int16 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r15
  __int16 v17; // cx
  unsigned __int16 v19; // bx
  __int64 v20; // r15
  struct _HIDP_PREPARSED_DATA *v21; // r13
  USHORT v22; // cx
  unsigned __int16 v23[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v24; // [rsp+44h] [rbp-D4h]
  USHORT ReportCount; // [rsp+46h] [rbp-D2h]
  int v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  struct _HIDP_PREPARSED_DATA *v28; // [rsp+58h] [rbp-C0h]
  __int64 v29; // [rsp+60h] [rbp-B8h]
  __int64 v30; // [rsp+68h] [rbp-B0h]
  _WORD *v31; // [rsp+70h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS v32; // [rsp+80h] [rbp-98h] BYREF

  v28 = a2;
  v27 = a1;
  v6 = a4;
  v26 = a4;
  memset(&v32, 0, sizeof(v32));
  v7 = *(_QWORD *)(a1 + 672);
  v23[0] = 1;
  v8 = *(unsigned __int16 *)(v7 + 4);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_WORD *)(v9 + 24 * v8 + 4);
  v11 = 0;
  *(_WORD *)(v7 + 8) = 0;
  v12 = Win32AllocPoolZInit(8LL * a3, 2003006290LL);
  v31 = v12;
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)(v7 + 24) = v12;
    v14 = 0;
    v24 = 0;
    v15 = 3LL * v10;
    v30 = v15;
    if ( *(_WORD *)(v9 + 24LL * v10 + 6) )
    {
      do
      {
        if ( !(_WORD)v8 )
          break;
        v16 = 3LL * (unsigned __int16)v8;
        v29 = v16;
        if ( *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 6) )
        {
          if ( v26 )
          {
            v19 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v19 )
            {
              v20 = v27;
              v21 = v28;
              do
              {
                v23[0] = 1;
                if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v19, 0x30u, &v32, v23, v21) == 1114112 )
                {
                  ReportCount = v32.ReportCount;
                  v23[0] = 1;
                  if ( rimHidP_GetSpecificValueCaps(HidP_Input, 1u, v19, 0x31u, &v32, v23, v21) == 1114112 )
                  {
                    v22 = v32.ReportCount;
                    if ( (_WORD)v8 == *(_WORD *)(v7 + 4) )
                    {
                      *(_WORD *)(v7 + 8) = v19;
                      v11 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v7 + 24) + 8LL * (unsigned __int16)v8 + 2) = v19;
                    if ( v22 == ReportCount && ReportCount == 2 )
                      *(_DWORD *)(v20 + 276) |= 0x800u;
                  }
                }
                v19 = *(_WORD *)(v9 + 24LL * v19 + 8);
              }
              while ( v19 );
              v16 = v29;
              v14 = v24;
              v15 = v30;
              v13 = v31;
            }
          }
        }
        v17 = v8;
        LOWORD(v8) = *(_WORD *)(v9 + 8 * v16 + 8);
        if ( (_WORD)v8 )
          v13[4 * (unsigned __int16)v8 + 2] = v17;
        else
          *(_WORD *)(v7 + 6) = v17;
        v24 = ++v14;
      }
      while ( v14 < *(_WORD *)(v9 + 8 * v15 + 6) );
      v6 = v26;
    }
    if ( !v6 )
      return 1;
  }
  return v11;
}
