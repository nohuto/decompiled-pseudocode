/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C000F4D8
 * Callers:
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C000F678 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C000F6F8 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C000FC80 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C000FCE0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C000FD38 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C000FEB8 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
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
  unsigned int v33; // r8d
  int v34; // r8d
  int v35; // eax
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // xmm0_8
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  _DWORD *v44; // r10
  __int64 v45; // [rsp+20h] [rbp-20h] BYREF
  int v46; // [rsp+28h] [rbp-18h]
  __int64 v47; // [rsp+30h] [rbp-10h] BYREF
  int v48; // [rsp+38h] [rbp-8h]
  int v49; // [rsp+78h] [rbp+38h]

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
            v47 = *a3;
            v14 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v13, a2, a5);
            v15 = *((unsigned int *)a4 + 2);
            v48 = v14;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v47,
                   v15);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v19 = *a3;
      v46 = *((_DWORD *)a3 + 2);
      v20 = *a4;
      v45 = v19;
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
            if ( HIDWORD(v45) == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = HIDWORD(v45) + 1;
          }
          else
          {
            v34 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v23, a2, a5);
            v35 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
            HIDWORD(v45) = v35;
            if ( v35 == -1 )
              *(_DWORD *)a3 = -1;
            else
              *(_DWORD *)a3 = v35 + 1;
            v36 = *(_QWORD *)(*a4 + 8 * v10);
            *(_QWORD *)v36 = v45;
            *(_DWORD *)(v36 + 8) = v34;
          }
          goto LABEL_21;
        }
        v46 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v23, a2, a5);
        v33 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
        if ( *((_DWORD *)a3 + 1) < v33 )
          v33 = *((_DWORD *)a3 + 1);
        HIDWORD(v45) = v33;
        if ( v33 == -1 )
          *(_DWORD *)a3 = -1;
        else
          *(_DWORD *)a3 = v33 + 1;
        **(_DWORD **)(*a4 + 8 * v10) = v33 + 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v45,
               (unsigned int)v10);
        if ( v5 < 0 )
          goto LABEL_21;
        LODWORD(v10) = v10 + 1;
        goto LABEL_67;
      }
      if ( v18 < v22 )
      {
        v46 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                v21[2],
                *((unsigned int *)a3 + 2),
                a2,
                a5);
        v37 = *(__int64 **)(*a4 + 8 * v10);
        v38 = *v37;
        v48 = *((_DWORD *)v37 + 2);
        HIDWORD(v47) = HIDWORD(v38);
        v39 = HIDWORD(v45) + 1;
        LODWORD(v47) = HIDWORD(v45) + 1;
        if ( HIDWORD(v45) == -1 )
          v39 = -1;
        v40 = v45;
        *(_DWORD *)a3 = v39;
        v49 = v10 + 1;
        *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL) = v40 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v45,
               (unsigned int)(v10 + 1));
        if ( v5 >= 0 )
        {
          LODWORD(v10) = v10 + 1;
          *a5 = 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v47,
                 (unsigned int)++v49);
        }
        v41 = v49;
        if ( v5 < 0 )
          v41 = v10;
        LODWORD(v10) = v41;
        goto LABEL_21;
      }
      if ( v17 <= v22 )
      {
        v46 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                v21[2],
                *((unsigned int *)a3 + 2),
                a2,
                a5);
        v42 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL);
        HIDWORD(v45) = v42;
        *(_DWORD *)a3 = v42 == -1 ? -1 : v42 + 1;
        *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v10) + 4LL) = v45 - 1;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v45,
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
          v43 = (unsigned int)(v10 - 1);
          v44 = *(_DWORD **)(*a4 + 8 * v43);
          if ( v30 == v44[2] )
          {
            *v29 = *v44;
            CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
              a4,
              (unsigned int)v43);
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
    v46 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
            0LL,
            *((unsigned int *)a3 + 2),
            a2,
            a5);
    v32 = **(_DWORD **)(*a4 + 8 * v10) - 1;
    if ( *((_DWORD *)a3 + 1) < v32 )
      v32 = *((_DWORD *)a3 + 1);
    HIDWORD(v45) = v32;
    if ( v32 == -1 )
      *(_DWORD *)a3 = -1;
    else
      *(_DWORD *)a3 = v32 + 1;
    v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a4,
           &v45,
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
