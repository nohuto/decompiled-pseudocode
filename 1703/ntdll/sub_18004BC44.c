/*
 * XREFs of sub_18004BC44 @ 0x18004BC44
 * Callers:
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 */

__int64 __fastcall sub_18004BC44(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int16 v6; // si
  _WORD *v8; // r14
  _OBJECT_BOUNDARY_DESCRIPTOR *v9; // rcx
  char v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = sub_18003E520(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v13, &v10, (__int64)&v11);
  v5 = 0;
  while ( 1 )
  {
    v6 = v4;
    if ( v10 )
      break;
    if ( !v4 || v4 > 0xFFFE )
      return (unsigned int)-1073741562;
    if ( v11 == 5 && (dword_18015C448 & v12) != 0 )
      break;
    if ( v4 < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = v4;
      return v5;
    }
    v8 = sub_180043FE0(v4);
    if ( !v8 )
      return (unsigned int)-1073741801;
    v9 = *(_OBJECT_BOUNDARY_DESCRIPTOR **)(a2 + 8);
    if ( (_OBJECT_BOUNDARY_DESCRIPTOR *)(a2 + 16) != v9 )
      RtlDeleteBoundaryDescriptor(v9);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = v8;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v6;
    *v8 = 0;
    v4 = sub_18003E520(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v13, &v10, (__int64)&v11);
  }
  return (unsigned int)-1073741515;
}
