/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C0022328
 * Callers:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00224F8 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0022578 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00225F8 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0022CA0 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C0022CD0 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0022D30 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0022D88 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r12d
  bool v9; // r14
  __int64 v10; // rsi
  int v11; // eax
  bool v12; // cl
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  unsigned int *v21; // r10
  unsigned int v22; // eax
  __int64 v23; // rdx
  bool v24; // cf
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // r10
  _DWORD *v29; // r9
  int v30; // r8d
  _DWORD *v31; // rcx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r8d
  int v36; // r8d
  int v37; // eax
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // xmm0_8
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  _DWORD *v46; // r10
  __int64 v47; // [rsp+20h] [rbp-20h] BYREF
  int v48; // [rsp+28h] [rbp-18h]
  __int64 v49; // [rsp+30h] [rbp-10h] BYREF
  int v50; // [rsp+38h] [rbp-8h]
  int v51; // [rsp+78h] [rbp+38h]

  v5 = 0;
  *a5 = 0;
  v9 = 1;
  if ( a2 != 3 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= *((_DWORD *)a4 + 2)
        || (v17 = *(_DWORD *)a3, v18 = *((_DWORD *)a3 + 1), *(_DWORD *)a3 > v18) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v11 = *((_DWORD *)a4 + 2);
          v12 = v11 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v11 - 1)) + 4LL) == -1;
          if ( *(_DWORD *)a3 <= *((_DWORD *)a3 + 1) && !v12 && (a2 == 6 || a2 == 1) )
          {
            v13 = *((unsigned int *)a3 + 2);
            v49 = *a3;
            v14 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v13, a2, a5);
            v15 = *((unsigned int *)a4 + 2);
            v50 = v14;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v49,
                   v15);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v19 = *a3;
      v48 = *((_DWORD *)a3 + 2);
      v20 = *a4;
      v47 = v19;
      v21 = *(unsigned int **)(v20 + 8 * v10);
      if ( v17 < *v21 )
        break;
      v22 = v21[1];
      if ( v17 == *v21 )
      {
        v23 = *((unsigned int *)a3 + 2);
        v24 = v18 < v22;
        v25 = v18 == v22;
        v26 = v21[2];
        if ( !v24 )
        {
          if ( v25 )
          {
            v27 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v23, a2, a5);
            *(_DWORD *)(v28 + 8) = v27;
            if ( HIDWORD(v47) == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = HIDWORD(v47) + 1;
          }
          else
          {
            v36 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v23, a2, a5);
            v37 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
            HIDWORD(v47) = v37;
            if ( v37 == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = v37 + 1;
            v38 = *(_QWORD *)(*a4 + 8 * v10);
            *(_QWORD *)v38 = v47;
            *(_DWORD *)(v38 + 8) = v36;
          }
          goto LABEL_21;
        }
        v33 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v23, a2, a5);
        v34 = *((_DWORD *)a3 + 1);
        v48 = v33;
        v35 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
        if ( v34 < v35 )
          v35 = v34;
        HIDWORD(v47) = v35;
        if ( v35 == -1 )
          *(_DWORD *)a3 = -1;
        else
          *(_DWORD *)a3 = v35 + 1;
        **(_DWORD **)(*a4 + 8 * v10) = v35 + 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v47,
               (unsigned int)v10);
        if ( v5 < 0 )
          goto LABEL_21;
        LODWORD(v10) = v10 + 1;
        goto LABEL_67;
      }
      if ( v18 < v22 )
      {
        v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                v21[2],
                *((unsigned int *)a3 + 2),
                a2,
                a5);
        v39 = *(__int64 **)(*a4 + 8 * v10);
        v40 = *v39;
        v50 = *((_DWORD *)v39 + 2);
        HIDWORD(v49) = HIDWORD(v40);
        v41 = HIDWORD(v47) + 1;
        LODWORD(v49) = HIDWORD(v47) + 1;
        if ( HIDWORD(v47) == -1 )
          v41 = -1;
        v42 = v47;
        *(_DWORD *)a3 = v41;
        v51 = v10 + 1;
        *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL) = v42 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v47,
               (unsigned int)(v10 + 1));
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v10 + 1;
          *a5 = 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v49,
                 (unsigned int)++v51);
        }
        v43 = v51;
        if ( v5 < 0 )
          v43 = v10;
        LODWORD(v10) = v43;
        goto LABEL_21;
      }
      if ( v17 <= v22 )
      {
        v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                v21[2],
                *((unsigned int *)a3 + 2),
                a2,
                a5);
        v44 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
        HIDWORD(v47) = v44;
        *(_DWORD *)a3 = v44 == -1 ? -1 : v44 + 1;
        *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL) = v47 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v47,
               (unsigned int)(v10 + 1));
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v10 + 1;
LABEL_67:
          *a5 = 1;
        }
      }
LABEL_21:
      v29 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v10);
      v30 = v29[2];
      if ( v30 )
      {
        if ( (_DWORD)v10 )
        {
          v45 = (unsigned int)(v10 - 1);
          v46 = *(_DWORD **)(*a4 + 8 * v45);
          if ( v30 == v46[2] )
          {
            *v29 = *v46;
            CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
              a4,
              (unsigned int)v45);
            LODWORD(v10) = v10 - 1;
            *a5 = 1;
          }
        }
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v10);
        *a5 = 1;
        LODWORD(v10) = v10 - 1;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( v5 < 0 )
        goto LABEL_4;
    }
    v48 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
            0LL,
            *((unsigned int *)a3 + 2),
            a2,
            a5);
    v32 = **(_DWORD **)(*a4 + 8 * v10) - 1;
    if ( *((_DWORD *)a3 + 1) < v32 )
      v32 = *((_DWORD *)a3 + 1);
    HIDWORD(v47) = v32;
    if ( v32 == -1 )
      *(_DWORD *)a3 = -1;
    else
      *(_DWORD *)a3 = v32 + 1;
    v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a4,
           &v47,
           (unsigned int)v10);
    if ( v5 < 0 )
      goto LABEL_21;
    goto LABEL_67;
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v31 = *(_DWORD **)*a4;
    if ( v31[2] == *((_DWORD *)a3 + 2) && *v31 == *(_DWORD *)a3 )
      v9 = v31[1] != *((_DWORD *)a3 + 1);
  }
  *a5 = v9;
  if ( v9 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
