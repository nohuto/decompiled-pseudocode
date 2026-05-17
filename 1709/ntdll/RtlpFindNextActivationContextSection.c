/*
 * XREFs of RtlpFindNextActivationContextSection @ 0x180034B98
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x1800343D0 (RtlFindActivationContextSectionString.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800349C0 (RtlFindActivationContextSectionGuid.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180034D20 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindNextActivationContextSection(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  const char *SystemDefaultActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  _PEB *ProcessEnvironmentBlock; // r15
  int v11; // esi
  int v12; // eax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v14; // eax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rax
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
      goto LABEL_26;
    }
    v14 = v12 - 1;
    if ( !v14 )
      goto LABEL_7;
    if ( v14 == 1 )
      goto LABEL_11;
LABEL_26:
    if ( *(_DWORD *)(a1 + 20) > 3u )
      return 3221225701LL;
LABEL_13:
    if ( !SystemDefaultActivationContextData )
      return 3222601729LL;
    result = RtlpLocateActivationContextSection(
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
  v16 = 0;
  if ( ActivationContext != -4 )
    v11 = 0;
  LOBYTE(v16) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v16 | v11;
  if ( a4 )
  {
    v17 = 0LL;
    if ( ActivationContext != -4 )
      v17 = ActivationContext;
    *a4 = v17;
  }
  return 0LL;
}
