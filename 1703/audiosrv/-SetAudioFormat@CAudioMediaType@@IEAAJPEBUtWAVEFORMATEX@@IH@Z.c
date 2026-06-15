/*
 * XREFs of ?SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z @ 0x1800015B4
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180001440 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180001710 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

__int64 __fastcall CAudioMediaType::SetAudioFormat(
        CAudioMediaType *this,
        const struct tWAVEFORMATEX *a2,
        unsigned int a3,
        int a4)
{
  unsigned int cbSize; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // edi
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  int v13; // ecx
  unsigned int v14; // ebx
  HANDLE v15; // rax
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  if ( a2 )
  {
    if ( !a4 && !(unsigned int)ValidateWaveFormat(a2) )
      return (unsigned int)-2147024809;
    cbSize = a2->cbSize;
    v8 = -1;
    v9 = cbSize + 18;
    if ( cbSize + 18 >= cbSize )
      v8 = cbSize + 18;
    v10 = v9 < cbSize ? 0x80070216 : 0;
    if ( v9 < cbSize )
      return v10;
    if ( v8 <= a3 )
    {
      v11 = (void *)*((_QWORD *)this + 2);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v11);
      v13 = 18;
      *((_QWORD *)this + 2) = 0LL;
      if ( a2->wFormatTag != 1 )
        v13 = a2->cbSize + 18;
      v14 = v13;
      v15 = GetProcessHeap();
      v16 = HeapAlloc(v15, 0, v14);
      *((_QWORD *)this + 2) = v16;
      if ( v16 )
      {
        memcpy_0(v16, a2, v14);
        if ( a2->wFormatTag == 1 )
          *(_WORD *)(*((_QWORD *)this + 2) + 16LL) = 0;
        v17 = *((_QWORD *)this + 2);
        if ( *(_WORD *)v17 )
        {
          if ( ((*(_WORD *)v17 - 1) & 0xFFFD) == 0 )
            goto LABEL_22;
          if ( *(_WORD *)v17 != 0xFFFE )
            goto LABEL_24;
          v18 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)(v17 + 24);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)(v17 + 24) )
            v18 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)(v17 + 32);
          if ( !v18 )
            goto LABEL_22;
          v19 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)(v17 + 24);
          if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)(v17 + 24) )
            v19 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)(v17 + 32);
          if ( v19 )
LABEL_24:
            *((_DWORD *)this + 3) = 1;
          else
LABEL_22:
            *((_DWORD *)this + 3) = 0;
        }
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
    return v10;
  }
  return 2147942487LL;
}
