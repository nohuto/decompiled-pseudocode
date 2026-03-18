/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x14049F750
 * Callers:
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 */

char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  PERESOURCE *v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE v12; // rbx
  PERESOURCE *v14; // [rsp+20h] [rbp-88h]
  PERESOURCE v15; // [rsp+28h] [rbp-80h]
  PERESOURCE v16; // [rsp+30h] [rbp-78h]
  char v17[16]; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+B8h] [rbp+10h]

  LODWORD(v6) = *(_DWORD *)(a2 + 40);
  if ( (v6 & 0x80u) != 0LL )
    return v6;
  v6 = *(_QWORD *)(a2 + 136);
  if ( v6 )
  {
    if ( *(int *)(v6 + 36) < 1 )
      return v6;
    v10 = *(PERESOURCE **)(v6 + 48);
    v14 = v10;
    v19 = 0;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a2 + 24);
  LOBYTE(v6) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v6 != 2 )
    return v6;
  if ( !v7 )
    return v6;
  v8 = *(_DWORD *)(v7 + 416);
  LOBYTE(v6) = v8 & 6;
  if ( (v8 & 6) != 4 )
    return v6;
  if ( (v8 & 0x400) == 0 )
  {
    v10 = *(PERESOURCE **)(v7 + 80);
    if ( !v10 )
      return v6;
    v14 = *(PERESOURCE **)(v7 + 80);
    v19 = 0;
    LODWORD(v6) = 0;
    goto LABEL_18;
  }
  v9 = *(_QWORD *)(a2 + 32);
  if ( !v9 )
    return v6;
  LODWORD(v6) = SeCreateClientSecurityEx(v9, (int)v7 + 260, 0, (__int64)v17);
  if ( (int)v6 < 0 )
  {
    v10 = v14;
LABEL_18:
    if ( (int)v6 < 0 )
      return v6;
    goto LABEL_10;
  }
  v10 = (PERESOURCE *)Object;
  v14 = (PERESOURCE *)Object;
  v19 = 1;
LABEL_10:
  v16 = v10[3];
  v15 = v10[2];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v14[6], 1u);
  v12 = v14[7];
  ExReleaseResourceLite(v14[6]);
  KeLeaveCriticalRegion();
  if ( v19 )
    ObfDereferenceObject(Object);
  *a3 = v15;
  LOBYTE(v6) = (_BYTE)v16;
  a3[1] = v16;
  a3[2] = v12;
  *a4 |= 0x8000000u;
  return v6;
}
