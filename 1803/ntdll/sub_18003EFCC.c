/*
 * XREFs of sub_18003EFCC @ 0x18003EFCC
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x18003C960 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 */

__int64 __fastcall sub_18003EFCC(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  const char *SystemDefaultActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  PPEB ProcessEnvironmentBlock; // r15
  unsigned int v11; // ecx
  int v12; // esi
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // [rsp+68h] [rbp+10h]

  v17 = a2;
  v4 = NtCurrentTeb();
  SystemDefaultActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = 2;
  while ( 1 )
  {
    switch ( v11 )
    {
      case 0u:
        ActivationContextStackPointer = v4->ActivationContextStackPointer;
        if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
        {
          ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
          if ( ActivationContext )
          {
            if ( ActivationContext == -4 )
            {
              SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
            }
            else
            {
              if ( ActivationContext == -3 )
              {
                SystemDefaultActivationContextData = "Actx ";
LABEL_31:
                *(_DWORD *)(a1 + 20) = 1;
                goto LABEL_13;
              }
              SystemDefaultActivationContextData = *(const char **)(ActivationContext + 24);
            }
          }
          if ( SystemDefaultActivationContextData )
            goto LABEL_31;
        }
LABEL_7:
        SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->ActivationContextData;
        ActivationContext = 0LL;
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 2;
          goto LABEL_13;
        }
LABEL_11:
        SystemDefaultActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
        ActivationContext = -4LL;
        if ( SystemDefaultActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 3;
          goto LABEL_13;
        }
        break;
      case 1u:
        goto LABEL_7;
      case 2u:
        goto LABEL_11;
    }
    if ( v11 > 3 )
      return 3221225701LL;
LABEL_13:
    if ( !SystemDefaultActivationContextData )
      return 3222601729LL;
    result = sub_18003F160(
               (_DWORD)SystemDefaultActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 )
      return result;
    v11 = *(_DWORD *)(a1 + 20);
    if ( v11 == 3 )
      return result;
    a2 = v17;
  }
  v15 = 0;
  if ( ActivationContext != -4 )
    v12 = 0;
  LOBYTE(v15) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v15 | v12;
  if ( a4 )
  {
    v16 = 0LL;
    if ( ActivationContext != -4 )
      v16 = ActivationContext;
    *a4 = v16;
  }
  return 0LL;
}
