/*
 * XREFs of ACPIGetProcessorStatus @ 0x1C0026AB0
 * Callers:
 *     ACPIGetConvertToDevicePresence @ 0x1C0025C04 (ACPIGetConvertToDevicePresence.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGetProcessorStatus(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // esi
  volatile signed __int32 *v5; // r14
  _QWORD *v6; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 *v11; // rax
  __int64 v12; // r8
  __int16 v13; // ax
  const char *v14; // rcx
  __int64 v15; // rcx
  char *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 i; // rax
  unsigned __int8 v19; // cl
  unsigned __int64 v20; // r9
  char *v21; // rdx
  char v22; // al
  __int16 v23; // ax
  char v24; // al
  __int16 v25; // ax
  __int64 result; // rax

  v3 = 0;
  dword_1C0067F80 = 0;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 712);
  v8 = 15;
  if ( !v6 || (*(_QWORD *)(a1 + 8) & 0x1000000000LL) == 0 )
    goto LABEL_46;
  if ( *(_WORD *)(*v6 + 66LL) == 12 )
  {
    v9 = *(_QWORD *)(*v6 + 96LL);
    if ( v9 )
    {
      v10 = *(unsigned __int8 *)(v9 + 8);
      goto LABEL_13;
    }
LABEL_46:
    v3 = -1073741808;
    goto LABEL_47;
  }
  v11 = AMLIGetNamedChild(v6, 1145656671);
  v5 = (volatile signed __int32 *)v11;
  if ( !v11 )
    goto LABEL_45;
  v12 = *v11;
  v13 = *(_WORD *)(*v11 + 66);
  if ( v13 == 1 )
  {
    v10 = *(_DWORD *)(v12 + 80);
  }
  else
  {
    if ( v13 != 8 )
      goto LABEL_45;
    if ( (*(_QWORD *)(a1 + 8) & 0x400000000000LL) == 0 )
      goto LABEL_46;
    v14 = *(const char **)(a1 + 568);
    if ( !v14 )
      goto LABEL_46;
    v10 = _strtoui64(v14, 0LL, 16);
  }
LABEL_13:
  *(_DWORD *)(a1 + 196) = v10;
  v15 = *((_QWORD *)AcpiInformation + 4);
  if ( v15 )
  {
    v16 = (char *)(v15 + 44);
    v17 = v15 + *(unsigned int *)(v15 + 4);
    for ( i = v15 + 46; ; i = v20 + 2 )
    {
      if ( i > v17 )
        goto LABEL_45;
      v19 = v16[1];
      if ( v19 < 2u )
        goto LABEL_45;
      v20 = (unsigned __int64)&v16[v19];
      if ( v20 > v17 )
        goto LABEL_45;
      v21 = v16;
      v16 += v19;
      v22 = *v21;
      if ( *v21 )
      {
        if ( v22 == 11 )
        {
          if ( v19 >= 0x28u )
          {
            v25 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
            if ( (v25 == 12 || v25 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && *((_DWORD *)v21 + 2) == v10 )
            {
              v24 = v21[12];
              goto LABEL_28;
            }
          }
        }
        else if ( v22 == 9
               && v19 >= 0x10u
               && *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL) == 6
               && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0
               && *((_DWORD *)v21 + 3) == v10 )
        {
          if ( (v21[8] & 1) == 0 )
            goto LABEL_45;
          goto LABEL_47;
        }
      }
      else if ( v19 >= 8u )
      {
        v23 = *(_WORD *)(**(_QWORD **)(a1 + 712) + 66LL);
        if ( (v23 == 12 || v23 == 6 && (*(_QWORD *)(a1 + 8) & 0x1000000000LL) != 0) && (unsigned __int8)v21[2] == v10 )
        {
          v24 = v21[4];
LABEL_28:
          v8 = (v24 & 1) != 0 ? 0xF : 0;
          goto LABEL_47;
        }
      }
    }
  }
  if ( dword_1C0067F80 )
  {
    if ( dword_1C0067F84 != v10 )
LABEL_45:
      v8 = 0;
  }
  else
  {
    dword_1C0067F84 = v10;
    dword_1C0067F80 = 1;
  }
LABEL_47:
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  result = v3;
  *a3 = v8;
  return result;
}
