/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014BE4
 * Callers:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0012B7C (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0014CB8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(int a1, struct DirectComposition::CChannel **a2)
{
  __int64 v4; // rdi
  struct DirectComposition::CProcessData *v5; // rax
  struct DirectComposition::CProcessData *v6; // r14
  struct _ERESOURCE *v7; // rbx
  struct _RTL_GENERIC_TABLE *v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // esi
  struct _ERESOURCE *v11; // rbx
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = DirectComposition::CProcessData::Current();
  v6 = v5;
  if ( v5 )
  {
    v7 = (struct _ERESOURCE *)*((_QWORD *)v5 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v7, 1u);
    v8 = *(struct _RTL_GENERIC_TABLE **)v6;
    Buffer = a1;
    v14 = 0LL;
    v9 = RtlLookupElementGenericTable(v8, &Buffer);
    if ( v9 )
      v4 = v9[1];
    v10 = v4 == 0 ? 0xC0000022 : 0;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v4 )
  {
    v11 = *(struct _ERESOURCE **)(v4 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    *a2 = (struct DirectComposition::CChannel *)v4;
  }
  return v10;
}
