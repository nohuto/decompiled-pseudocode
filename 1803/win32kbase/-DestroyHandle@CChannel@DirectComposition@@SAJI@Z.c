/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010C44
 * Callers:
 *     NtDCompositionDestroyChannel @ 0x1C0010C30 (NtDCompositionDestroyChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C0010E00 (NtDCompositionCreateChannel.c)
 *     NtDCompositionCreateDwmChannel @ 0x1C0142F00 (NtDCompositionCreateDwmChannel.c)
 * Callees:
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0010D00 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0014CB8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(int a1)
{
  DirectComposition::CChannel *v2; // rdi
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rsi
  struct _ERESOURCE *v5; // rbx
  struct _RTL_GENERIC_TABLE *v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current();
  v4 = v3;
  if ( v3 )
  {
    v5 = (struct _ERESOURCE *)*((_QWORD *)v3 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *(struct _RTL_GENERIC_TABLE **)v4;
    Buffer = a1;
    v11 = 0LL;
    v7 = RtlLookupElementGenericTable(v6, &Buffer);
    if ( v7 )
    {
      v2 = (DirectComposition::CChannel *)v7[1];
      RtlDeleteElementGenericTable(v6, v7);
    }
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 1));
    KeLeaveCriticalRegion();
    v8 = v2 == 0LL ? 0xC0000022 : 0;
  }
  else
  {
    v8 = -1073741823;
  }
  if ( v2 )
    DirectComposition::CChannel::Release(v2);
  return v8;
}
