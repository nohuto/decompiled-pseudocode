/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C00048F4
 * Callers:
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0004774 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00047F4 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1C0004874 (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1C00051B8 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C00051E8 (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1C0005220 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C00052F8 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 *a4,
        bool *a5)
{
  int v5; // r15d
  bool v8; // r14
  __int64 v9; // rdi
  int v10; // eax
  bool v11; // cl
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  unsigned int v17; // ecx
  unsigned int v18; // r13d
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  unsigned int *v21; // r11
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r11
  int v29; // eax
  _DWORD *v30; // r9
  int v31; // edx
  _DWORD *v32; // rcx
  unsigned int v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // r13d
  __int64 *v43; // rcx
  __int64 v44; // xmm0_8
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  __int64 v48; // r13
  _DWORD *v49; // r8
  __int64 v50; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-18h]
  __int64 v52; // [rsp+30h] [rbp-10h] BYREF
  int v53; // [rsp+38h] [rbp-8h]
  unsigned int v54; // [rsp+80h] [rbp+40h]
  unsigned int v55; // [rsp+88h] [rbp+48h]

  v55 = a2;
  v5 = 0;
  *a5 = 0;
  v8 = 1;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2) || (v17 = *a3, v18 = a3[1], *a3 > v18) )
      {
LABEL_4:
        if ( v5 >= 0 )
        {
          v10 = *((_DWORD *)a4 + 2);
          v11 = v10 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v10 - 1)) + 4LL) == -1;
          if ( *a3 <= a3[1] && !v11 && (a2 == 6 || a2 == 1) )
          {
            v12 = a2;
            v13 = a3[2];
            v52 = *(_QWORD *)a3;
            v14 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, v13, v12, a5);
            v15 = *((unsigned int *)a4 + 2);
            v53 = v14;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v52,
                   v15);
            if ( v5 >= 0 )
              *a5 = 1;
          }
        }
        return (unsigned int)v5;
      }
      v19 = *(_QWORD *)a3;
      v51 = a3[2];
      v20 = *a4;
      v50 = v19;
      v21 = *(unsigned int **)(v20 + 8 * v9);
      v22 = *v21;
      if ( v17 < (unsigned int)v22 )
      {
        v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, a3[2], a2, a5);
        v33 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( a3[1] < v33 )
          v33 = a3[1];
        HIDWORD(v50) = v33;
        if ( v33 == -1 )
          v34 = -1;
        else
          v34 = v33 + 1;
        *a3 = v34;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v50,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v23 = v21[1];
        v54 = v23;
        if ( v17 == (_DWORD)v22 )
        {
          v24 = a2;
          v25 = a3[2];
          v26 = v21[2];
          if ( v18 < v23 )
          {
            v35 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v25, v24, a5);
            v36 = a3[1];
            v51 = v35;
            v37 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            if ( v36 < v37 )
              v37 = v36;
            HIDWORD(v50) = v37;
            v38 = -1;
            if ( v37 != -1 )
              v38 = v37 + 1;
            *a3 = v38;
            **(_DWORD **)(*a4 + 8 * v9) = v37 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   (unsigned int)v9);
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
          else
          {
            v27 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v26, v25, v24, a5);
            v22 = v27;
            if ( v18 == v54 )
            {
              *(_DWORD *)(v28 + 8) = v27;
              if ( HIDWORD(v50) == -1 )
                v29 = -1;
              else
                v29 = HIDWORD(v50) + 1;
              *a3 = v29;
            }
            else
            {
              v39 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
              HIDWORD(v50) = v39;
              if ( v39 == -1 )
                v40 = -1;
              else
                v40 = v39 + 1;
              *a3 = v40;
              v41 = *(_QWORD *)(*a4 + 8 * v9);
              *(_QWORD *)v41 = v50;
              *(_DWORD *)(v41 + 8) = v22;
            }
          }
        }
        else if ( v18 >= v23 )
        {
          if ( v17 <= v23 )
          {
            v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v21[2], a3[2], a2, a5);
            v46 = *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL);
            HIDWORD(v50) = v46;
            v47 = v46 == -1 ? -1 : v46 + 1;
            *a3 = v47;
            *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v50 - 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v50,
                   (unsigned int)(v9 + 1));
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
        }
        else
        {
          v51 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v21[2], a3[2], a2, a5);
          v42 = v9 + 1;
          v43 = *(__int64 **)(*a4 + 8 * v9);
          v44 = *v43;
          v53 = *((_DWORD *)v43 + 2);
          HIDWORD(v52) = HIDWORD(v44);
          v45 = HIDWORD(v50) + 1;
          LODWORD(v52) = HIDWORD(v50) + 1;
          if ( HIDWORD(v50) == -1 )
            v45 = -1;
          *a3 = v45;
          *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 4LL) = v50 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v50,
                 v42);
          if ( v5 >= 0 )
          {
            LODWORD(v9) = v9 + 1;
            *a5 = 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v52,
                   ++v42);
          }
          if ( v5 < 0 )
            v42 = v9;
          LODWORD(v9) = v42;
        }
      }
      v30 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v9);
      v31 = v30[2];
      if ( v31 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_24;
        v48 = (unsigned int)(v9 - 1);
        v49 = *(_DWORD **)(*a4 + 8 * v48);
        if ( v31 != v49[2] )
          goto LABEL_24;
        *v30 = *v49;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v48,
          v49);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9,
          v22);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_24:
      a2 = v55;
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
        goto LABEL_4;
    }
  }
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    v32 = *(_DWORD **)*a4;
    if ( v32[2] == a3[2] && *v32 == *a3 )
      v8 = v32[1] != a3[1];
  }
  *a5 = v8;
  if ( v8 )
  {
    CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a4, 0LL);
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
