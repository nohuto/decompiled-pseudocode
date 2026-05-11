/*
 * XREFs of PropertyGetEqualizerLevels @ 0x1C0018FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetEqualizerLevels(IRP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  unsigned __int64 Length; // r15
  PKSFILTER FilterFromIrp; // rcx
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 i; // r8

  v4 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v10 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
    if ( (unsigned int)v4 < *(_DWORD *)(v10 + 92) )
    {
      v11 = *(_QWORD *)(v10 + 128);
      a1->IoStatus.Information = 4LL * *(unsigned int *)(v11 + 40 * v4 + 12);
      if ( Length < 4 * (unsigned __int64)*(unsigned int *)(v11 + 40 * v4 + 12) )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v11 + 40 * v4 + 12); i = (unsigned int)(i + 1) )
          *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(*(_QWORD *)(v11 + 40 * v4 + 32) + 20 * i);
        return 0;
      }
    }
  }
  return v7;
}
