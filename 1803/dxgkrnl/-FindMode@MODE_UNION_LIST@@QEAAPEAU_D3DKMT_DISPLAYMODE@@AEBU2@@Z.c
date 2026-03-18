/*
 * XREFs of ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C0191600
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v2; // r8d
  unsigned int v4; // edx
  __int64 v5; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v2 = *((_DWORD *)this + 4);
  v4 = 0;
  if ( !v2 )
    return 0LL;
  while ( 1 )
  {
    v5 = *((_QWORD *)this + 1) + 44LL * v4;
    if ( *(_QWORD *)&a2->Width == *(_QWORD *)v5
      && a2->Format == *(_DWORD *)(v5 + 8)
      && a2->IntegerRefreshRate == *(_DWORD *)(v5 + 12)
      && a2->DisplayOrientation == *(_DWORD *)(v5 + 28)
      && a2->DisplayFixedOutput == *(_DWORD *)(v5 + 32)
      && a2->ScanLineOrdering == *(_DWORD *)(v5 + 24)
      && ((*((_BYTE *)&a2->Flags + 4) ^ *(_BYTE *)(v5 + 40)) & 0x10) == 0
      && ((*(_BYTE *)&a2->Flags ^ *(_BYTE *)(v5 + 36)) & 2) == 0 )
    {
      break;
    }
    if ( ++v4 >= v2 )
      return 0LL;
  }
  if ( a2->RefreshRate.Numerator != *(_DWORD *)(v5 + 16) || a2->RefreshRate.Denominator != *(_DWORD *)(v5 + 20) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent((unsigned int)(*(_DWORD *)&a2->Flags ^ *(_DWORD *)(v5 + 36)));
    v7[3] = a2->Width;
    v7[4] = a2->Height;
    v7[5] = a2->Format;
    v7[6] = a2->IntegerRefreshRate;
    WdLogEvent5_WdDmmEvent(v7);
    v9 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
    v9[3] = a2->RefreshRate.Numerator;
    v9[4] = a2->RefreshRate.Denominator;
    v9[5] = *(unsigned int *)(v5 + 16);
    v9[6] = *(unsigned int *)(v5 + 20);
    WdLogEvent5_WdDmmEvent(v9);
  }
  return (struct _D3DKMT_DISPLAYMODE *)v5;
}
