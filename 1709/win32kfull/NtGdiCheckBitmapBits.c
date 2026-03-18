/*
 * XREFs of NtGdiCheckBitmapBits @ 0x1C0291040
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0290918 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, char *a3, int a4, SIZE_T Size, int a6, int a7, char *Address)
{
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  char *v15; // rdx
  char *v16; // r9
  HANDLE v17; // rsi
  HANDLE v18; // rax
  void *v19; // rbx
  ULONG v21; // ecx
  _QWORD v22[11]; // [rsp+40h] [rbp-58h] BYREF

  memset(v22, 0, 0x20uLL);
  v12 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_24;
  v13 = 3LL * (unsigned int)Size;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 3 < (unsigned int)v13 )
  {
    v21 = 534;
LABEL_25:
    EngSetLastError(v21);
    return 0LL;
  }
  v14 = (v13 + 3) & 0xFFFFFFFC;
  if ( a7 != v14 )
  {
LABEL_24:
    v21 = 87;
    goto LABEL_25;
  }
  LODWORD(v22[0]) = 5;
  HIDWORD(v22[0]) = Size;
  LODWORD(v22[1]) = 1;
  HIDWORD(v22[1]) = (v13 + 3) & 0xFFFFFFFC;
  v22[2] = 0LL;
  LODWORD(v22[3]) = 0;
  if ( v14 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = &a3[v14];
    if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( (_DWORD)Size )
  {
    v16 = &Address[(unsigned int)Size];
    if ( (unsigned __int64)v16 > MmUserProbeAddress || v16 < Address )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v17 = MmSecureVirtualMemory(a3, v14, 2u);
  v18 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  v19 = v18;
  if ( v17 )
  {
    if ( v18 )
      v12 = GreCheckBitmapBits(a1, a2, (struct _DEVBITMAPINFO *)v22, a3, (unsigned __int8 *)Address);
    MmUnsecureVirtualMemory(v17);
  }
  if ( v19 )
    MmUnsecureVirtualMemory(v19);
  return v12;
}
