/*
 * XREFs of sub_1800C9E34 @ 0x1800C9E34
 * Callers:
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlInitAnsiStringEx @ 0x18006DC10 (RtlInitAnsiStringEx.c)
 *     sub_1800C9EEC @ 0x1800C9EEC (sub_1800C9EEC.c)
 */

__int64 __fastcall sub_1800C9E34(__int64 a1)
{
  NTSTATUS inited; // esi
  unsigned __int64 v3; // r15
  int v4; // eax
  __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned int i; // edi
  __int64 v8; // rcx
  STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  inited = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = sub_18001014C(v3, 1, 0xDu, &v11, &v12);
  v5 = v12;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = 0;
    for ( i = v11 >> 5; v6 < i; ++v6 )
    {
      v8 = *(unsigned int *)(32LL * v6 + v5 + 4);
      if ( !(_DWORD)v8 )
        break;
      inited = RtlInitAnsiStringEx(&DestinationString, (PCSZ)(v3 + v8));
      if ( inited < 0 )
        break;
      inited = sub_1800C9EEC(a1, &DestinationString);
      if ( inited < 0 )
        break;
    }
  }
  return (unsigned int)inited;
}
