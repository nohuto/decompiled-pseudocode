/*
 * XREFs of ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011878
 * Callers:
 *     ndisNsiSetThreadInformation @ 0x1C00A64C0 (ndisNsiSetThreadInformation.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00E4740 (NdisSetThreadObjectCompartmentId.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00E4760 (NdisSetThreadObjectCompartmentScope.c)
 *     ndisNsiSetAllThreadInformation @ 0x1C00E4920 (ndisNsiSetAllThreadInformation.c)
 * Callees:
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C000FEB8 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C00119BC (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0044DE4 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C006728C (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00673B0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, unsigned int *a2, unsigned int *a3)
{
  _DWORD *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r15
  _DWORD *ThreadProperty; // rax
  int StateObject; // ebx
  void *v13; // rax
  PVOID Object; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  Object = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    ndisCmGetThreadState(Thread, &v15, &v16);
    v13 = ndisCmValidateCompartmentChange(v15, *a2);
    v3 = Object;
    v4 = v13;
    if ( !v13 )
    {
      StateObject = -1073741275;
      goto LABEL_17;
    }
    v5 = 1;
  }
  if ( a3 )
  {
    if ( *a3 == -1 )
    {
      v5 = 1;
    }
    else if ( *a3 )
    {
      StateObject = -1073741811;
      goto LABEL_15;
    }
  }
  ThreadProperty = PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
  Object = ThreadProperty;
  v3 = ThreadProperty;
  if ( ThreadProperty )
  {
    if ( a2 )
    {
      *ThreadProperty = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
      v3 = Object;
    }
    if ( a3 )
    {
      v3[1] = *a3;
      v3 = Object;
    }
    if ( !*v3 && !v3[1] )
    {
      ObfDereferenceObject(v3);
      v3 = 0LL;
      v6 = 1;
      Object = 0LL;
    }
  }
  else if ( v5 )
  {
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
    {
LABEL_14:
      v3 = Object;
      goto LABEL_15;
    }
    if ( a2 )
    {
      *(_DWORD *)Object = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
    }
    if ( a3 )
      *((_DWORD *)Object + 1) = *a3;
    v3 = Object;
LABEL_13:
    StateObject = PsSetThreadProperty(Thread, 1833133134LL, v3);
    goto LABEL_14;
  }
  StateObject = 0;
  if ( v6 )
    goto LABEL_13;
LABEL_15:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser(v4, a2, a3, v3);
    v3 = Object;
  }
LABEL_17:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)StateObject;
}
