/*
 * XREFs of WmipAllocDataSource @ 0x140545E04
 * Callers:
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     WmipAllocEntry @ 0x1404689D0 (WmipAllocEntry.c)
 */

_QWORD *WmipAllocDataSource()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx

  v0 = WmipAllocEntry((__int64)&WmipDSChunkInfo);
  v1 = v0;
  if ( v0 )
  {
    v0[6] = v0 + 5;
    v0[5] = v0 + 5;
    *((_DWORD *)v0 + 16) = 4;
    v0[9] = v0 + 10;
    memset(v0 + 10, 0, 0x20uLL);
  }
  return v1;
}
