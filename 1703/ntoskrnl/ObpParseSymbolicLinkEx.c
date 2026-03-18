/*
 * XREFs of ObpParseSymbolicLinkEx @ 0x1405604C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x14012B9D0 (ObReferenceObjectByPointer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall ObpParseSymbolicLinkEx(
        char *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        char **a11)
{
  unsigned __int16 *v14; // r14
  __int64 v15; // rdi
  char *v16; // r15
  unsigned int v17; // ebp
  unsigned int v18; // edi
  __int64 v19; // rsi
  unsigned __int16 v20; // r13
  char *PoolWithTag; // r12
  char *v22; // rcx
  char *v23; // rcx
  char **v24; // rax
  __int64 result; // rax
  NTSTATUS v26; // eax
  int v27; // edi
  _BYTE v28[16]; // [rsp+30h] [rbp-38h] BYREF
  PVOID Objecta; // [rsp+70h] [rbp+8h] BYREF

  Objecta = 0LL;
  if ( (*((_DWORD *)Object + 7) & 2) != 0 && !RtlIsSandboxedToken(a3 + 1, a4) )
  {
    v27 = -1073741772;
    goto LABEL_30;
  }
  v14 = a7;
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      v27 = -1073741788;
      goto LABEL_30;
    }
  }
  else if ( ObjectType == ObpSymbolicLinkObjectType
         && ((*((_DWORD *)Object + 7) & 1) == 0 || !PsIsCurrentThreadInServerSilo()) )
  {
    v26 = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
    v27 = v26;
    if ( v26 >= 0 )
    {
      *a11 = Object;
      goto LABEL_30;
    }
    if ( v26 != -1073741788 )
      goto LABEL_30;
  }
  v15 = a10;
  if ( (*((_DWORD *)Object + 7) & 8) != 0 )
    *(_DWORD *)(a10 + 4) &= *((_DWORD *)Object + 8);
  if ( (*((_DWORD *)Object + 7) & 4) != 0 )
    *(_QWORD *)(v15 + 8) = PsGetHostSilo();
  if ( (*((_DWORD *)Object + 7) & 0x10) != 0 )
  {
    v27 = (*((__int64 (__fastcall **)(char *, _QWORD, _BYTE *, PVOID *))Object + 1))(
            Object,
            *((_QWORD *)Object + 2),
            v28,
            &Objecta);
    if ( v27 < 0 )
      goto LABEL_30;
    v16 = v28;
  }
  else
  {
    v16 = Object + 8;
  }
  v17 = *(unsigned __int16 *)v16;
  if ( *(_WORD *)v16
    && *(_WORD *)(*((_QWORD *)v16 + 1) + 2 * ((unsigned __int64)*(unsigned __int16 *)v16 >> 1) - 2) == 92
    && *v14
    && **((_WORD **)v14 + 1) == 92 )
  {
    v17 -= 2;
  }
  v18 = v17 + *v14;
  if ( v18 > 0xFFF0 )
  {
    v27 = -1073741562;
    goto LABEL_30;
  }
  v19 = a6;
  v20 = *(_WORD *)(a6 + 2);
  if ( v20 <= (unsigned __int16)v18 )
  {
    v20 = v18 + 2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v17 + *v14 + 2), 0x6D4E624Fu);
    if ( PoolWithTag )
      goto LABEL_15;
    v27 = -1073741670;
LABEL_30:
    if ( Objecta )
      ObfDereferenceObject(Objecta);
    return (unsigned int)v27;
  }
  PoolWithTag = *(char **)(a6 + 8);
LABEL_15:
  if ( *v14 )
    memmove(&PoolWithTag[v17], *((const void **)v14 + 1), *v14);
  memmove(PoolWithTag, *((const void **)v16 + 1), v17);
  *(_WORD *)&PoolWithTag[2 * ((unsigned __int64)(unsigned __int16)v18 >> 1)] = 0;
  v22 = *(char **)(v19 + 8);
  if ( PoolWithTag != v22 && v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = (char *)Objecta;
  v24 = a11;
  *(_QWORD *)(v19 + 8) = PoolWithTag;
  *(_WORD *)v19 = v18;
  *(_WORD *)(v19 + 2) = v20;
  if ( v23 )
  {
    *v24 = v23;
    return 280LL;
  }
  else
  {
    *v24 = Object;
    result = 260LL;
    if ( (*((_DWORD *)Object + 7) & 1) != 0 )
      return 872LL;
  }
  return result;
}
