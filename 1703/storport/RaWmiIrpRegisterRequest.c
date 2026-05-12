/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1C0061994
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v4; // rdx
  unsigned int v5; // ebp
  int v6; // r14d
  char v7; // r15
  bool v8; // di
  __int64 v9; // r12
  __int64 v10; // rax
  char v11; // di
  const void **DriverObjectExtension; // rax
  __int64 v13; // rdx
  const void **v14; // r13
  unsigned __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rax

  v2 = *(unsigned int **)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a1;
  if ( *(_DWORD *)v4 )
  {
    if ( *(_DWORD *)v4 != 1 )
      goto LABEL_5;
    v10 = *(_QWORD *)(v4 + 24);
    v7 = *(_BYTE *)(v10 + 451);
    v11 = *(_BYTE *)(v10 + 104);
  }
  else
  {
    v7 = *(_BYTE *)(v4 + 451);
    v11 = *(_BYTE *)(v4 + 104);
  }
  v8 = (v11 & 2) != 0;
LABEL_5:
  if ( *(_DWORD *)(a2 + 8) > 1u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(a1 + 8), DriverEntry);
  v14 = DriverObjectExtension;
  if ( DriverObjectExtension )
  {
    if ( v7 && v8 )
    {
      v15 = *(unsigned int *)(a2 + 16);
      v5 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
      if ( v15 <= (unsigned __int64)v5 + 4 )
        v16 = 4;
      else
        v16 = v15 - v5;
      *(_DWORD *)(a2 + 16) = v16;
      LOBYTE(v13) = 8;
      v17 = RaWmiPassToMiniPort(v9, v13, a2);
      v18 = *(_DWORD *)(a2 + 16);
      v6 = v17;
    }
    else
    {
      v18 = 0;
    }
    if ( v6 != -1073741789 )
    {
      if ( v6 < 0 )
      {
LABEL_16:
        *(_DWORD *)(a2 + 16) = v18;
        return (unsigned int)v6;
      }
      if ( v18 != 4 )
      {
        if ( v18 )
        {
          v20 = v18;
          *(_WORD *)((char *)v2 + v18) = *((_WORD *)v14 + 20);
          memmove((char *)v2 + v18 + 2, v14[6], *((unsigned __int16 *)v14 + 20));
          v21 = *(_QWORD *)(v9 + 64);
          if ( *(_DWORD *)v21 != 1 )
            v9 = *(_QWORD *)(v21 + 32);
          while ( (unsigned __int64)(v2 + 6) <= *(_QWORD *)(a2 + 24) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
          {
            v22 = v2[4];
            if ( !v22
              || (unsigned __int64)&v2[8 * v22 - 2] > *(_QWORD *)(a2 + 24)
                                                    + (unsigned __int64)*(unsigned int *)(a2 + 16) )
            {
              break;
            }
            v23 = 0;
            v2[2] = v20;
            do
            {
              v24 = 8LL * v23;
              v25 = v2[v24 + 10];
              if ( (v25 & 0xC) != 0 )
              {
                *(_QWORD *)&v2[v24 + 12] = v9;
                v2[v24 + 10] = v25 & 0xFFFFFFD3 | 0x20;
              }
              ++v23;
            }
            while ( v23 < v2[4] );
            v26 = v2[1];
            if ( !(_DWORD)v26 )
              break;
            v20 -= v26;
            v2 = (unsigned int *)((char *)v2 + v26);
          }
          v18 += v5;
          *v2 = v18;
        }
        goto LABEL_16;
      }
    }
    *v2 += v5;
    v18 = 4;
    v6 = -1073741789;
    goto LABEL_16;
  }
  return 3221225473LL;
}
