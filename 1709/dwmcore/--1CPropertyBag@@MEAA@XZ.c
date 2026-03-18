/*
 * XREFs of ??1CPropertyBag@@MEAA@XZ @ 0x1800A69CC
 * Callers:
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800A58D0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPropertyBag::~CPropertyBag(CPropertyBag *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  ULONG i; // edi
  void *v4; // r8
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 64);
  *(_QWORD *)this = &CPropertyBag::`vftable';
  for ( i = 0; i < RtlNumberGenericTableElements(v2); ++i )
  {
    v4 = (void *)*((_QWORD *)RtlGetElementGenericTable(v2, i) + 1);
    if ( v4 )
      HeapFree(WPF::g_processHeap, 0, v4);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v5 )
      break;
    RtlDeleteElementGenericTable(v2, v5);
  }
  CPropertyBagBase::~CPropertyBagBase(this);
}
