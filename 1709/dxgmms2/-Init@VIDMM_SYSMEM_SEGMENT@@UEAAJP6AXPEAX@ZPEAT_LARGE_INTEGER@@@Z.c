/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = this[2].LowPart;
    *(_QWORD *)(v14 + 32) = this;
  }
  result = VIDMM_SEGMENT::Init(this, a2, a3);
  v9 = result;
  if ( (int)result >= 0 )
  {
    this[16].QuadPart = 0LL;
    v10 = WdLogNewEntry5_WdEvent(v8, v7);
    WdLogEvent5_WdEvent(v10);
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v13[3] = this[6].QuadPart;
    v13[4] = this[3].HighPart;
    v13[5] = this[3].LowPart;
    v13[6] = this[2].LowPart;
    WdLogEvent5_WdEvent(v13);
    return v9;
  }
  return result;
}
