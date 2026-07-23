/*
 * XREFs of sub_18002CFE4 @ 0x18002CFE4
 * Callers:
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18002D604 @ 0x18002D604 (sub_18002D604.c)
 *     sub_18002D628 @ 0x18002D628 (sub_18002D628.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     sub_18007BA4C @ 0x18007BA4C (sub_18007BA4C.c)
 *     sub_18007C270 @ 0x18007C270 (sub_18007C270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002CFE4(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v9; // r15
  int *v10; // rdi
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF

  v2 = 0;
  v13[1] = 512LL;
  v11 = 0LL;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    LOWORD(v6) = v5->OptionalHeader.MajorSubsystemVersion;
    LOWORD(v7) = v5->OptionalHeader.MinorSubsystemVersion;
    sub_18002D604(4LL, &v11);
    if ( (unsigned __int16)v6 > *(_WORD *)(v11 + 20)
      || (_WORD)v6 == *(_WORD *)(v11 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v11 + 22) )
    {
      *a2 = v11;
    }
    else
    {
      if ( (unsigned int)sub_18007C270(ActivationContext) && &v14 )
      {
        v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
        if ( v14 )
        {
          v9 = v14;
          v10 = &v15;
          do
          {
            if ( v10[4] == 1
              && (unsigned int)sub_18002D628(v10, &v12)
              && *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16) >= v7 )
            {
              v7 = *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16);
            }
            v10 += 5;
            --v9;
          }
          while ( v9 );
        }
        v6 = HIWORD(v7);
      }
      sub_18007BA4C((unsigned __int16)v6, (unsigned __int16)v7, v13);
      *a2 = v13[0];
    }
    return 1;
  }
  return v2;
}
