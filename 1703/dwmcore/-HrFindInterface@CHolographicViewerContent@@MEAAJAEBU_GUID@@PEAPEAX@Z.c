/*
 * XREFs of ?HrFindInterface@CHolographicViewerContent@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A5780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicViewerContent::HrFindInterface(
        CHolographicViewerContent *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0675e853_e9c4_431b_a147_8fa75f90f053.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0675e853_e9c4_431b_a147_8fa75f90f053.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0675e853_e9c4_431b_a147_8fa75f90f053.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
  return v4;
}
