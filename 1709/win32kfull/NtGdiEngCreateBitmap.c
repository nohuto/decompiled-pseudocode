/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C011FD80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C011FF34 (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r14d
  FLONG v13; // esi
  __int64 v14; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  char *v17; // rcx
  struct _EPROCESS *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  BOOL v21; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v21 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl) || (unsigned __int64)(v11 * HIDWORD(*(unsigned __int64 *)&sizl)) > 0xFFFFFFFF )
    return 0LL;
  v12 = v11 * sizl.cy;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9),
          !(unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:BMF_UMPDMEM is set.\n",
            1102);
        a4 &= ~0x80u;
      }
    }
  }
  if ( Address )
  {
    v13 = a4 & 0xFFFFFFF7;
    if ( v12 )
    {
      v17 = &Address[v12];
      if ( (unsigned __int64)v17 > MmUserProbeAddress || v17 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, v12, 4u);
    v21 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v18 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v9),
            !(unsigned int)bIsProcessLocalSystem(v18)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1138);
          v21 = 0;
        }
      }
    }
    v13 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 72) )
      v13 |= 0x80u;
  }
  if ( v21 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v13, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v14) = 5;
      v19 = HmgShareLockCheck(Bitmap, v14);
      v20 = v19;
      if ( v19 )
      {
        *(_QWORD *)(v19 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      if ( v20 )
        DEC_SHARE_REF_CNT(v20);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
