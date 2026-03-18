/*
 * XREFs of ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0144400
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ReferenceDwmProcess @ 0x1C003C930 (ReferenceDwmProcess.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  PVOID v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  char v8; // [rsp+38h] [rbp-10h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return 1;
  v4 = ReferenceDwmProcess();
  if ( v4 )
  {
    if ( ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &Object, 0LL) >= 0 )
    {
      v8 = 1;
      ObDuplicateObject(Object, -1LL, v4, &v10, -1073741824, 0, 2, v8);
      ObfDereferenceObjectWithTag(Object, 0);
    }
  }
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &Object) )
  {
    v5 = (char *)Object;
    *(_DWORD *)Object = 36;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x20uLL);
    *(_DWORD *)v6 = 164;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 6);
    *((_QWORD *)v6 + 1) = *((_QWORD *)this + 8);
    *((_QWORD *)v6 + 2) = *((_QWORD *)this + 9);
    *((_QWORD *)v6 + 3) = v10;
    *((_DWORD *)this + 4) &= ~0x80u;
    return 1;
  }
  return 0;
}
