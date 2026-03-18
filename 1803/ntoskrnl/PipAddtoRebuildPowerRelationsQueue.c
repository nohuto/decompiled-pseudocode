/*
 * XREFs of PipAddtoRebuildPowerRelationsQueue @ 0x1405CAB1C
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PipAddDependencyEdgeBetweenNodes @ 0x14023A538 (PipAddDependencyEdgeBetweenNodes.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14063B97C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x1405CABA8 (PipIsDeviceReadyForPowerRelations.c)
 */

_QWORD *__fastcall PipAddtoRebuildPowerRelationsQueue(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  void *v4; // rcx
  _QWORD *v5; // rbx

  result = (_QWORD *)PipIsDeviceReadyForPowerRelations(a1, a1);
  if ( (_BYTE)result )
  {
    if ( v2 )
    {
      result = *(_QWORD **)(v2 + 312);
      v3 = result[10];
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v4 = *(void **)(v3 + 48);
      if ( v4 )
      {
        v5 = (_QWORD *)(v3 + 72);
        if ( (_QWORD *)*v5 == v5 )
        {
          ObfReferenceObjectWithTag(v4, 0x44706E50u);
          ++*(_DWORD *)(v3 + 88);
          result = (_QWORD *)qword_1403C7E68;
          if ( *(__int64 **)qword_1403C7E68 != &PiRebuildPowerRelationsQueue )
            __fastfail(3u);
          *v5 = &PiRebuildPowerRelationsQueue;
          *(_QWORD *)(v3 + 80) = result;
          *result = v5;
          qword_1403C7E68 = v3 + 72;
        }
      }
    }
  }
  return result;
}
