/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x14049CA10
 * Callers:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     RtlCopySid @ 0x14049CB70 (RtlCopySid.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rax
  PACCESS_TOKEN v4; // rbx
  struct _KTHREAD *v5; // rax
  unsigned __int8 *v6; // r8
  ULONG v7; // esi
  char v9; // [rsp+30h] [rbp-88h] BYREF
  int v10; // [rsp+34h] [rbp-84h] BYREF
  int v11; // [rsp+38h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (void *)PsReferenceEffectiveToken(
                 (_DWORD)CurrentThread,
                 (unsigned int)&v10,
                 (unsigned int)&v9,
                 (unsigned int)&v11,
                 0LL);
  v4 = v3;
  if ( v10 == 2 && v11 < 2 )
  {
    if ( v3 )
      ObfDereferenceObject(v3);
    v4 = PsReferencePrimaryToken(CurrentThread->Process);
    v10 = 1;
  }
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)v4 + 6), 1u);
  v6 = (unsigned __int8 *)**((_QWORD **)v4 + 19);
  v7 = 4 * v6[1] + 8;
  if ( v7 <= 0x44 )
    RtlCopySid(v7, DestinationSid, v6);
  ExReleaseResourceLite(*((PERESOURCE *)v4 + 6));
  KeLeaveCriticalRegion();
  if ( v10 == 1 )
    ObFastDereferenceObject((signed __int64 *)&CurrentThread->Process[1].Affinity.Bitmap[5], (unsigned __int64)v4);
  else
    ObfDereferenceObject(v4);
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v7;
  *(_WORD *)a1 = (v7 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), DestinationSid, v7);
  return memset((void *)(a1 + v7 + 8), 0, ((v7 + 15) & 0xFFFFFFF8) - (v7 + 8));
}
