/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01908FC
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  void *v6; // rdi
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = ++*((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 6);
  if ( v4 > v5 )
  {
    v6 = (void *)*((_QWORD *)this + 1);
    v7 = 44LL * (v5 + 500);
    if ( !is_mul_ok(v5 + 500, 0x2CuLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 1) = v8;
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v9 + 24) = 1651LL;
      WdLogEvent5_WdLowResource(v9);
      operator delete[](v6);
      return 3221225495LL;
    }
    if ( v6 )
    {
      memmove(v8, v6, 44LL * *((unsigned int *)this + 6));
      memset((void *)(*((_QWORD *)this + 1) + 44LL * *((unsigned int *)this + 6)), 0, 0x55F0uLL);
      operator delete[](v6);
    }
    else
    {
      memset(v8, 0, 0x55F0uLL);
    }
    *((_DWORD *)this + 6) += 500;
    v4 = *((_DWORD *)this + 4);
  }
  v11 = 44LL * (v4 - 1);
  v12 = *((_QWORD *)this + 1);
  *(_OWORD *)(v11 + v12) = *(_OWORD *)&a2->Width;
  *(_OWORD *)(v11 + v12 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
  *(_QWORD *)(v11 + v12 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
  *(_DWORD *)(v11 + v12 + 40) = *((_DWORD *)&a2->Flags + 1);
  return 0LL;
}
