/*
 * XREFs of BiConvertRegistryDataToElement @ 0x140609628
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140607118 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiResolveLocateDevice @ 0x1407E21A4 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1407E24B0 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1407E25A0 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        HANDLE BcdObjectHandle,
        unsigned int *SourceString,
        size_t Size,
        unsigned int a4,
        char a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edi
  PCWSTR v10; // r15
  char v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rbx
  NTSTATUS v15; // ebx
  WCHAR *v16; // rcx
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
  size_t Sizea; // [rsp+88h] [rbp+48h] BYREF

  v7 = a7;
  v8 = 0;
  v9 = Size;
  LODWORD(Sizea) = 0;
  v10 = (PCWSTR)SourceString;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( (unsigned int)Size < 0x1C || SourceString[6] + 16LL != (unsigned int)Size )
      return (unsigned int)-1073741788;
    v16 = (WCHAR *)(SourceString + 4);
    if ( (a5 & 1) != 0 )
    {
      v17 = BiConvertBootEnvironmentDeviceToQualifiedPartition(v16, &P, &Sizea);
    }
    else if ( (a5 & 2) != 0 )
    {
      v17 = BiConvertBootEnvironmentDeviceToUnknown(v16);
    }
    else
    {
      v17 = BiConvertBootEnvironmentDeviceToNt((char *)v16, a4, a5, (size_t *)&P.Length, (unsigned int *)&Sizea);
    }
    v15 = v17;
    if ( v17 >= 0 )
    {
      v18 = *(unsigned int **)&P.Length;
      if ( **(_DWORD **)&P.Length == 8 && (int)BiResolveLocateDevice(BcdObjectHandle) >= 0 )
      {
        v26 = v18[6];
        v13 = Sizea - v26;
        memmove(v18, (char *)v18 + v26, (unsigned int)(Sizea - v26));
      }
      else
      {
        v13 = Sizea;
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
    v13 = Sizea;
    goto LABEL_67;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( (_DWORD)Size && (Size & 1) == 0 )
    {
      v12 = 0;
      v13 = Size;
      v14 = (unsigned int)Size;
      if ( *(_WORD *)((char *)SourceString + (unsigned int)Size - 2) )
      {
        v13 = Size + 2;
        v12 = 1;
        v9 = Size + 2;
      }
      if ( v9 > *a7 )
        goto LABEL_8;
      v20 = Guid;
      memmove(Guid, SourceString, (unsigned int)Size);
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
      if ( (unsigned int)Size >= 2 && (Size & 1) == 0 )
      {
        v13 = 0;
        *((_WORD *)SourceString + ((unsigned __int64)(unsigned int)Size >> 1) - 1) = 0;
        if ( *(_WORD *)SourceString )
        {
          do
          {
            if ( v8 >= v9 )
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
      if ( (unsigned int)Size > 8 )
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
        if ( (_DWORD)Size != 1 )
          return (unsigned int)-1073741788;
        v13 = 2;
        if ( *a7 >= 2 )
        {
          v23 = Guid;
          BYTE1(Guid->Data1) = 0;
          LOBYTE(v23->Data1) = *(_BYTE *)SourceString != 0;
          goto LABEL_24;
        }
        goto LABEL_8;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !(_DWORD)Size || (Size & 7) != 0 )
          return (unsigned int)-1073741788;
        v13 = Size;
        if ( *a7 < (unsigned int)Size )
          goto LABEL_8;
      }
      else
      {
        if ( !(_DWORD)Size )
          return (unsigned int)-1073741788;
        v13 = Size;
        if ( (unsigned int)Size > *a7 )
          goto LABEL_8;
      }
      v22 = Guid;
    }
    memmove(v22, SourceString, (unsigned int)Size);
    goto LABEL_24;
  }
  v13 = 16;
  if ( *a7 >= 0x10 )
  {
    if ( (unsigned int)Size < 2 || (Size & 1) != 0 )
      return (unsigned int)-1073741788;
    *((_WORD *)SourceString + ((unsigned __int64)(unsigned int)Size >> 1) - 1) = 0;
    RtlInitUnicodeString(&P, (PCWSTR)SourceString);
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
