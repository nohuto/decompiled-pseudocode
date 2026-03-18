/*
 * XREFs of TranslateBridgeResources @ 0x1C00A7730
 * Callers:
 *     <none>
 * Callees:
 *     CmMemIoResourceUpdateType @ 0x1C00595D4 (CmMemIoResourceUpdateType.c)
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor)
{
  unsigned __int8 Type; // bp
  ULONGLONG v11; // rax
  unsigned int v12; // r10d
  unsigned int v13; // ebx
  unsigned __int64 QuadPart; // r9
  ULONGLONG v15; // r11
  unsigned int v16; // r8d
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int64 v19; // rcx
  UCHAR v20; // al

  Type = a2->Type;
  v11 = RtlCmDecodeMemIoResource(a2, 0LL);
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0;
  QuadPart = a2->u.Generic.Start.QuadPart;
  v15 = v11;
  v16 = 0;
  if ( !v12 )
    return 3221226021LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(a1 + 16) + 40LL * v16;
    v18 = *(_DWORD *)(v17 + 32);
    if ( a3 != 1 )
      break;
    if ( (v18 & 2) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 8);
      v20 = *(_BYTE *)v17;
      goto LABEL_7;
    }
LABEL_12:
    if ( ++v16 >= v12 )
      return 3221226021LL;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_12;
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(_BYTE *)(v17 + 1);
LABEL_7:
  if ( v20 != Type && (v20 != 7 || Type != 3) || QuadPart < v19 || QuadPart + v15 > *(_QWORD *)(v17 + 24) + v19 )
    goto LABEL_12;
  *(_OWORD *)&Descriptor->Type = *(_OWORD *)&a2->Type;
  *((_DWORD *)&Descriptor->u.Memory48 + 3) = *((_DWORD *)&a2->u.Memory48 + 3);
  if ( a3 )
  {
    if ( a3 == 1 )
      CmMemIoResourceUpdateType(
        Descriptor,
        *(_BYTE *)(v17 + 1),
        a2->u.Generic.Start.QuadPart + *(_QWORD *)(v17 + 16) - *(_QWORD *)(v17 + 8));
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    CmMemIoResourceUpdateType(
      Descriptor,
      *(_BYTE *)v17,
      a2->u.Generic.Start.QuadPart + *(_QWORD *)(v17 + 8) - *(_QWORD *)(v17 + 16));
    return 288;
  }
  return v13;
}
