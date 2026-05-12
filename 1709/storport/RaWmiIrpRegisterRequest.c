/*
 * XREFs of RaWmiIrpRegisterRequest @ 0x1C0063D54
 * Callers:
 *     RaWmiDispatchIrp @ 0x1C0063BE4 (RaWmiDispatchIrp.c)
 * Callees:
 *     memmove @ 0x1C001F340 (memmove.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 */

__int64 __fastcall RaWmiIrpRegisterRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned int *v4; // rbx
  unsigned int v5; // r15d
  NTSTATUS v6; // r14d
  char v7; // r12
  bool v8; // bp
  __int64 v10; // rax
  const void **DriverObjectExtension; // rax
  __int64 v12; // rdx
  const void **v13; // r13
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r12
  NTSTATUS v17; // eax
  unsigned int v18; // edi
  unsigned int v20; // ebp
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a1;
  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
    {
      v10 = *(_QWORD *)(v2 + 24);
      v7 = *(_BYTE *)(v10 + 451);
      v8 = (*(_BYTE *)(v10 + 104) & 2) != 0;
      if ( !*(_DWORD *)(a2 + 8)
        && (*(_DWORD *)(v2 + 1568) & 1) != 0
        && (*(_BYTE *)(v2 + 154) & 8) == 0
        && *(_QWORD *)(v2 + 1584) )
      {
        v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v2 + 1576), 1u);
        if ( v6 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 1576));
        else
          *(_BYTE *)(v2 + 154) |= 8u;
        v3 = a1;
      }
    }
  }
  else
  {
    v7 = *(_BYTE *)(v2 + 451);
    v8 = (*(_BYTE *)(v2 + 104) & 2) != 0;
  }
  if ( *(_DWORD *)(a2 + 8) > 1u )
    return 3221225485LL;
  DriverObjectExtension = (const void **)IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)(v3 + 8), DriverEntry);
  v13 = DriverObjectExtension;
  if ( DriverObjectExtension )
  {
    if ( v7 && v8 )
    {
      v14 = *(unsigned int *)(a2 + 16);
      v5 = *((unsigned __int16 *)DriverObjectExtension + 20) + 2;
      if ( v14 <= (unsigned __int64)v5 + 4 )
        v15 = 4;
      else
        v15 = v14 - v5;
      v16 = a1;
      *(_DWORD *)(a2 + 16) = v15;
      LOBYTE(v12) = 8;
      v17 = RaWmiPassToMiniPort(a1, v12, a2);
      v18 = *(_DWORD *)(a2 + 16);
      v6 = v17;
    }
    else
    {
      v16 = a1;
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
          *(_WORD *)((char *)v4 + v18) = *((_WORD *)v13 + 20);
          memmove((char *)v4 + v18 + 2, v13[6], *((unsigned __int16 *)v13 + 20));
          v21 = *(_QWORD *)(v16 + 64);
          if ( *(_DWORD *)v21 != 1 )
            v16 = *(_QWORD *)(v21 + 32);
          while ( (unsigned __int64)(v4 + 6) <= *(_QWORD *)(a2 + 24) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
          {
            v22 = v4[4];
            if ( !v22
              || (unsigned __int64)&v4[8 * v22 - 2] > *(_QWORD *)(a2 + 24)
                                                    + (unsigned __int64)*(unsigned int *)(a2 + 16) )
            {
              break;
            }
            v23 = 0;
            v4[2] = v20;
            do
            {
              v24 = 8LL * v23;
              v25 = v4[v24 + 10];
              if ( (v25 & 0xC) != 0 )
              {
                *(_QWORD *)&v4[v24 + 12] = v16;
                v4[v24 + 10] = v25 & 0xFFFFFFD3 | 0x20;
              }
              ++v23;
            }
            while ( v23 < v4[4] );
            v26 = v4[1];
            if ( !(_DWORD)v26 )
              break;
            v20 -= v26;
            v4 = (unsigned int *)((char *)v4 + v26);
          }
          v18 += v5;
          *v4 = v18;
        }
        goto LABEL_16;
      }
    }
    *v4 += v5;
    v18 = 4;
    v6 = -1073741789;
    goto LABEL_16;
  }
  return 3221225473LL;
}
