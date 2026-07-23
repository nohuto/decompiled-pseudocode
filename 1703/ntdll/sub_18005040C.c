/*
 * XREFs of sub_18005040C @ 0x18005040C
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18004AB20 @ 0x18004AB20 (sub_18004AB20.c)
 *     sub_18004C728 @ 0x18004C728 (sub_18004C728.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18005040C(__int64 a1)
{
  __int64 v2; // rcx
  _UNICODE_STRING *v3; // rsi
  int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-138h] BYREF
  _UNICODE_STRING v7; // [rsp+30h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+40h] [rbp-118h] BYREF

  *(_DWORD *)&v7.Length = 0x1000000;
  v2 = *(_QWORD *)(a1 + 48);
  v7.Buffer = v8;
  v8[0] = 0;
  v3 = (_UNICODE_STRING *)(v2 + 72);
  v4 = sub_18004C728((PUNICODE_STRING)(v2 + 88), (PUNICODE_STRING)(v2 + 72), *(_DWORD *)(a1 + 24), &v6);
  if ( v6 )
  {
    sub_180050570(a1);
  }
  else
  {
    v4 = sub_18004AB20(v3, &v7);
    if ( v4 >= 0 )
      v4 = sub_18004C7E0(a1, &v7);
  }
  if ( v8 != v7.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v7.Buffer);
  return (unsigned int)v4;
}
