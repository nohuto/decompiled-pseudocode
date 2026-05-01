/*
 * XREFs of ??_G?$CSimpleRunnableTask@V_lambda_1b237cfa226cb7a358646b393456f6b8_@@@TaskScheduler@shell@@UEAAPEAXI@Z @ 0x1802670B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CRunnableTask@@MEAA@XZ @ 0x180266E90 (--1CRunnableTask@@MEAA@XZ.c)
 */

CRunnableTask *__fastcall shell::TaskScheduler::CSimpleRunnableTask<_lambda_1b237cfa226cb7a358646b393456f6b8_>::`scalar deleting destructor'(
        CRunnableTask *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)this + 80);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)this + 72);
  CRunnableTask::~CRunnableTask(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
