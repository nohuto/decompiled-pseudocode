/*
 * XREFs of BiConvertRegistryDataToElement @ 0x14058C244
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiResolveLocateDevice @ 0x14073529C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x140735698 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x140735788 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  const WCHAR *v10; // r15
  char v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rbx
  NTSTATUS v15; // ebx
  void *v16; // rcx
  int v17; // eax
  unsigned int *v18; // rdi
  GUID *v20; // rdi
  GUID *v21; // rbx
  GUID *v22; // rcx
  GUID *v23; // rcx
  GUID *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  UNICODE_STRING P; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+88h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  LODWORD(Size) = 0;
  v10 = (const WCHAR *)a2;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( a3 < 0x1C || a2[6] + 16LL != a3 )
      return (unsigned int)-1073741788;
    v16 = a2 + 4;
    if ( (a5 & 1) != 0 )
    {
      v17 = BiConvertBootEnvironmentDeviceToQualifiedPartition(v16, &P, &Size);
    }
    else if ( (a5 & 2) != 0 )
    {
      v17 = BiConvertBootEnvironmentDeviceToUnknown(v16);
    }
    else
    {
      v17 = BiConvertBootEnvironmentDeviceToNt((char *)v16, a4, a5, (size_t *)&P.Length, (unsigned int *)&Size);
    }
    v15 = v17;
    if ( v17 >= 0 )
    {
      v18 = *(unsigned int **)&P.Length;
      if ( **(_DWORD **)&P.Length == 8 && (int)BiResolveLocateDevice(a1, *(_QWORD *)&P.Length) >= 0 )
      {
        v26 = v18[6];
        v13 = Size - v26;
        memmove(v18, (char *)v18 + v26, (unsigned int)(Size - v26));
      }
      else
      {
        v13 = Size;
      }
      if ( v13 <= *v7 )
      {
        v21 = Guid;
        memmove(Guid, v18, v13);
        *(GUID *)&v21->Data2 = *(GUID *)v10;
        ExFreePoolWithTag(v18, 0x4B444342u);
        v15 = 0;
      }
      else
      {
        v15 = -1073741789;
        ExFreePoolWithTag(v18, 0x4B444342u);
      }
      goto LABEL_25;
    }
    v13 = Size;
    goto LABEL_67;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( a3 && (a3 & 1) == 0 )
    {
      v12 = 0;
      v13 = a3;
      v14 = a3;
      if ( *(_WORD *)((char *)a2 + a3 - 2) )
      {
        v13 = a3 + 2;
        v12 = 1;
      }
      if ( v13 > *a7 )
        goto LABEL_8;
      v20 = Guid;
      memmove(Guid, a2, a3);
      if ( v12 )
        *(_WORD *)((char *)&v20->Data1 + v14) = 0;
LABEL_24:
      v15 = 0;
      goto LABEL_25;
    }
    return (unsigned int)-1073741788;
  }
  if ( (HIBYTE(a4) & 0xF) != 3 )
  {
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v24 = Guid;
      v15 = 0;
      if ( a3 >= 2 && (a3 & 1) == 0 )
      {
        v13 = 0;
        *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
        if ( *(_WORD *)a2 )
        {
          do
          {
            if ( v8 >= a3 )
              break;
            v13 += 16;
            if ( v13 <= *v7 )
            {
              RtlInitUnicodeString(&P, v10);
              v15 = RtlGUIDFromString(&P, v24);
              if ( v15 < 0 )
                goto LABEL_67;
              ++v24;
            }
            v25 = -1LL;
            do
              ++v25;
            while ( v10[v25] );
            v8 += 2 * v25 + 2;
            v10 += (unsigned int)(v25 + 1);
          }
          while ( *v10 );
        }
        if ( v13 <= *v7 )
          goto LABEL_25;
        goto LABEL_8;
      }
      return (unsigned int)-1073741788;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v13 = 8;
      if ( a3 > 8 )
        return (unsigned int)-1073741788;
      if ( *a7 < 8 )
        goto LABEL_8;
      v22 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( a3 != 1 )
          return (unsigned int)-1073741788;
        v13 = 2;
        if ( *a7 >= 2 )
        {
          v23 = Guid;
          BYTE1(Guid->Data1) = 0;
          LOBYTE(v23->Data1) = *(_BYTE *)a2 != 0;
          goto LABEL_24;
        }
        goto LABEL_8;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !a3 || (a3 & 7) != 0 )
          return (unsigned int)-1073741788;
        v13 = a3;
        if ( *a7 < a3 )
          goto LABEL_8;
      }
      else
      {
        if ( !a3 )
          return (unsigned int)-1073741788;
        v13 = a3;
        if ( a3 > *a7 )
          goto LABEL_8;
      }
      v22 = Guid;
    }
    memmove(v22, a2, a3);
    goto LABEL_24;
  }
  v13 = 16;
  if ( *a7 >= 0x10 )
  {
    if ( a3 < 2 || (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) = 0;
    RtlInitUnicodeString(&P, (PCWSTR)a2);
    v15 = RtlGUIDFromString(&P, Guid);
    if ( v15 >= 0 )
      goto LABEL_24;
LABEL_67:
    if ( v15 != -1073741789 )
      return (unsigned int)v15;
    goto LABEL_25;
  }
LABEL_8:
  v15 = -1073741789;
LABEL_25:
  *v7 = v13;
  return (unsigned int)v15;
}
