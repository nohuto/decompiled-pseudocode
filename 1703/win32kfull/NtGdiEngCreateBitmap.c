/*
 * XREFs of NtGdiEngCreateBitmap @ 0x1C0116090
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C0116244 (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateBitmap(SIZEL sizl, LONG a2, unsigned int a3, int a4, char *Address)
{
  HBITMAP Bitmap; // r15
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  FLONG v11; // esi
  __int64 v12; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  char *v15; // rcx
  struct _EPROCESS *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  BOOL v19; // [rsp+30h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+38h] [rbp-50h]

  Bitmap = 0LL;
  SecureHandle = 0LL;
  v19 = 1;
  if ( !(unsigned int)ValidUmpdSizl(sizl) )
    return 0LL;
  v10 = v9 * HIDWORD(*(unsigned __int64 *)&sizl);
  if ( v10 > 0xFFFFFFFF )
    return 0LL;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel),
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
    v11 = a4 & 0xFFFFFFF7;
    if ( (_DWORD)v10 )
    {
      v15 = &Address[(unsigned int)v10];
      if ( (unsigned __int64)v15 > W32UserProbeAddress || v15 < Address )
        *W32UserProbeAddress = 0;
    }
    SecureHandle = MmSecureVirtualMemory(Address, (unsigned int)v10, 4u);
    v19 = SecureHandle != 0LL;
  }
  else
  {
    if ( gUMPDSecurityLevel != 2 )
    {
      if ( !gUMPDSecurityLevel
        || (v16 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel), !(unsigned int)bIsProcessLocalSystem(v16)) )
      {
        if ( !a3 || a3 > 6 )
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateBitmap:Creating compressed surface withou"
              "t input buffer\n",
              1138);
          v19 = 0;
        }
      }
    }
    v11 = a4 | 8;
    if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72) )
      v11 |= 0x80u;
  }
  if ( v19 )
    Bitmap = EngCreateBitmap(sizl, a2, a3 | 0x8000, v11, Address);
  if ( SecureHandle )
  {
    if ( Bitmap )
    {
      LOBYTE(v12) = 5;
      v17 = HmgShareLockCheck(Bitmap, v12);
      v18 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 144) = SecureHandle;
      }
      else
      {
        MmUnsecureVirtualMemory(SecureHandle);
        EngDeleteSurface((HSURF)Bitmap);
        Bitmap = 0LL;
      }
      if ( v18 )
        DEC_SHARE_REF_CNT(v18);
    }
    else
    {
      MmUnsecureVirtualMemory(SecureHandle);
    }
  }
  return Bitmap;
}
