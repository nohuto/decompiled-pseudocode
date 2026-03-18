/*
 * XREFs of ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C023F45C
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

NTSTATUS LPMDisplayInitializeGlobal(void)
{
  PFILE_OBJECT *v0; // rax
  PFILE_OBJECT *v1; // rbx
  struct _ERESOURCE *v3; // rax

  qword_1C007AED8 = 0LL;
  v0 = (PFILE_OBJECT *)operator new[](0xA8uLL, 0x4B677844u, PagedPool);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 0LL;
    v0[1] = 0LL;
    v0[2] = 0LL;
    *((_DWORD *)v0 + 6) = -1;
    *((_DWORD *)v0 + 7) = 0;
    *((_DWORD *)v0 + 8) = 0;
    *((_DWORD *)v0 + 9) = 0;
    *((_DWORD *)v0 + 10) = 0;
    *((_DWORD *)v0 + 11) = 0;
    *((_DWORD *)v0 + 12) = 0;
    *((_DWORD *)v0 + 15) = 0;
    *((_DWORD *)v0 + 13) = 2;
    *((_DWORD *)v0 + 14) = 1;
    memset(v0 + 8, 0, 0x34uLL);
    memset(v1 + 17, 0, 0x20uLL);
  }
  else
  {
    v1 = 0LL;
  }
  FileObject = v1;
  if ( v1 && (v3 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512), (Resource = v3) != 0LL) )
    return ExInitializeResourceLite(v3);
  else
    return -1073741801;
}
