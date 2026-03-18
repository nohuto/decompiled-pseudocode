/*
 * XREFs of HvpAdjustBitmap @ 0x14043B030
 * Callers:
 *     HvpAdjustHiveFreeDisplay @ 0x14043AFB4 (HvpAdjustHiveFreeDisplay.c)
 * Callees:
 *     RtlClearBits @ 0x14008CF40 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall HvpAdjustBitmap(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int *v3; // r14
  unsigned int v4; // edi
  unsigned int v7; // esi
  unsigned int v8; // esi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  void *v11; // rax
  void *v12; // rbp
  const void *v13; // r15

  v3 = (unsigned int *)(a3 + 8);
  v4 = a2 >> 12;
  v7 = ((a2 >> 12) + 7) >> 3;
  if ( v7 )
    v8 = (v7 + 255) & 0xFFFFFF00;
  else
    v8 = 256;
  v9 = *v3;
  if ( (_DWORD)v9 )
  {
    if ( (unsigned int)(v9 + 7) < 8 )
      v10 = 256;
    else
      v10 = (((unsigned int)(v9 + 7) >> 3) + 255) & 0xFFFFFF00;
  }
  else
  {
    v10 = 0;
  }
  if ( v8 <= *(_DWORD *)a3 )
  {
    *v3 = v4;
    if ( (unsigned int)v9 < v4 )
      RtlClearBits((PRTL_BITMAP)(a3 + 8), v9, v4 - v9);
    return 0LL;
  }
  LOBYTE(v9) = 1;
  v11 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(v8, v9, 959663427LL);
  v12 = v11;
  if ( v11 )
  {
    *(_DWORD *)a3 = v8;
    v13 = (const void *)*((_QWORD *)v3 + 1);
    memset(v11, 0, v8);
    *v3 = v4;
    *((_QWORD *)v3 + 1) = v12;
    if ( v13 )
    {
      memmove(v12, v13, v10);
      (*(void (__fastcall **)(const void *, _QWORD))(a1 + 32))(v13, v10);
    }
    return 0LL;
  }
  return 3221225626LL;
}
