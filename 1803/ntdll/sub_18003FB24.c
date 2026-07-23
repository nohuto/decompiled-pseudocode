/*
 * XREFs of sub_18003FB24 @ 0x18003FB24
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 */

__int64 __fastcall sub_18003FB24(unsigned __int16 *a1, __int64 a2)
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

  v4 = sub_18003D640(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v13, &v10, (__int64)&v11);
  v5 = 0;
  while ( 1 )
  {
    v6 = v4;
    if ( v10 )
      break;
    if ( v4 - 1 > 0xFFFD )
      return (unsigned int)-1073741562;
    if ( v11 == 5 && (dword_18015D400 & v12) != 0 )
      break;
    if ( v4 < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = v4;
      return v5;
    }
    v8 = sub_18003B5E0(v4);
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
    v4 = sub_18003D640(a1, *(unsigned __int16 *)(a2 + 2), *(WCHAR **)(a2 + 8), &v13, &v10, (__int64)&v11);
  }
  return (unsigned int)-1073741515;
}
