/*
 * XREFs of sub_18003F9CC @ 0x18003F9CC
 * Callers:
 *     sub_18003D65C @ 0x18003D65C (sub_18003D65C.c)
 *     RtlFindActivationContextSectionGuid @ 0x18003D710 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x18003F770 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     sub_18003FB50 @ 0x18003FB50 (sub_18003FB50.c)
 */

__int64 __fastcall sub_18003F9CC(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  PACTIVATION_CONTEXT_DATA SystemDefaultActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  PPEB ProcessEnvironmentBlock; // r15
  int v11; // esi
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rax
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rax
  int v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  v4 = NtCurrentTeb();
  SystemDefaultActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v11 = 2;
  while ( 1 )
  {
    v12 = *(_DWORD *)(a1 + 20);
    if ( !v12 )
    {
      ActivationContextStackPointer = v4->ActivationContextStackPointer;
      if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
      {
        ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
        if ( ActivationContext )
        {
          if ( ActivationContext == -4 )
            SystemDefaultActivationContextData = ProcessEnvironmentBlock->SystemDefaultActivationContextData;
          else
            SystemDefaultActivationContextData = *(PACTIVATION_CONTEXT_DATA *)(ActivationContext + 24);
        }
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 1;
          goto LABEL_8;
        }
      }
LABEL_20:
      SystemDefaultActivationContextData = ProcessEnvironmentBlock->ActivationContextData;
      ActivationContext = 0LL;
      if ( SystemDefaultActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 2;
        goto LABEL_8;
      }
LABEL_22:
      SystemDefaultActivationContextData = ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      ActivationContext = -4LL;
      if ( SystemDefaultActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 3;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_20;
    if ( v13 == 1 )
      goto LABEL_22;
LABEL_7:
    if ( *(_DWORD *)(a1 + 20) > 3u )
      return 3221225701LL;
LABEL_8:
    if ( !SystemDefaultActivationContextData )
      return 3222601729LL;
    result = sub_18003FB50(
               (_DWORD)SystemDefaultActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 || *(_DWORD *)(a1 + 20) == 3 )
      return result;
    a2 = v18;
  }
  v15 = 0;
  if ( ActivationContext != -4 )
    v11 = 0;
  LOBYTE(v15) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v15 | v11;
  if ( a4 )
  {
    v16 = 0LL;
    if ( ActivationContext != -4 )
      v16 = ActivationContext;
    *a4 = v16;
  }
  return 0LL;
}
